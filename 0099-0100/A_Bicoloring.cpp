#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;

void DFS_bicolor(vector<vector<ll>>&adj,ll n){
    char arr[n];
    memset(arr,'1',sizeof(arr));
    stack<ll>st;
    st.push(0);
    arr[0]='b';
    while(!st.empty()){
        ll node=st.top();
        st.pop();
        char next_color= (arr[node]=='b')? 'w':'b';
        for(auto i : adj[node]){
            if(arr[i]=='1'){
                arr[i]=next_color;
                st.push(i);
            }
            else if(arr[i]==arr[node]){
                printf("NOT BICOLORABLE.\n");
                return;
            }
        }
    }
    printf("BICOLORABLE.\n");
    return;
}
void BFS_bicolor(vector<vector<ll>>&adj,ll n){
    // cout<<"called"<<endl;
    char arr[n];
    memset(arr,'1',sizeof(arr));
    // for(ll i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    queue<ll>q;
    q.push(0);
    arr[0]='b';
    while(!q.empty()){
        ll node=q.front();
        q.pop();
        char node_color=arr[node];
        char next_color= (node_color=='b')? 'w':'b';
        for(auto i : adj[node])
            if(arr[i]=='1'){
                arr[i]=next_color;
                q.push(i);
            }
            else if(arr[i]==node_color){
                printf("NOT BICOLORABLE.\n");
                return;
            }
    }
    printf("BICOLORABLE.\n");
    return;
}
void solve(ll n,ll m){
    vector<vector<ll>>adj(n);
    for(ll i=0;i<m;i++){
        ll u,v;
        scll(u); scll(v);
        adj[u].push_back(v);
    }
    DFS_bicolor(adj,n);
    return;
}
int main(){
    ll n,m;
    while(1){
        scll(n);
        if(n==0)
            exit(0);
        scll(m);
        solve(n,m);
    }
return 0;
}
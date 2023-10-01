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
typedef unsigned long long ull;
using namespace std;


//can be solved using borth bfs and dfs
void  bfs(const vector<vector<ll>> &apple,vector<ll>&ways, const ll n){
    // cout<<"BFS"<<endl;
    bool visit[n+1]={};
    queue<ll>st;
    vector<ll>parent(n+1);
    st.push(1);
    visit[1]=1;
    ll  node;
    vector<ll>arr;
    while(!st.empty()){
        node=st.front();   st.pop();
        // cout<<node<<" ";
        arr.push_back(node);
        ll cnt=0;
        for(auto child :apple[node]){
            if(!visit[child]){
                cnt++;
                parent[child]=node;
                st.push(child);
                visit[child]=1;
            }
        }
        if(!cnt)
            ways[node]=1;
    }
    // cout<<endl;
    // for(ll i=0;i<=n;i++){
    //     cout<<i<<" "<<parent[i]<<endl;
    // }
    reverse(arr.begin(),arr.end());
    for(auto i : arr){
        ways[parent[i]]+=ways[i];
    }
    // cout<<"ways"<<endl;
    // for(ll i=0;i<=n;i++){
    //     cout<<i<<" "<<ways[i]<<endl;
    // }
}


void  dfs(const vector<vector<ll>> &apple,vector<ll>&ways, const ll n){
    // cout<<"DFS"<<endl;
    bool visit[n+1]={};
    stack<ll>st;
    vector<ll>parent(n+1);
    st.push(1);
    visit[1]=1;
    ll  node;
    vector<ll>arr;
    while(!st.empty()){
        node=st.top();   st.pop();
        // cout<<node<<" ";
        arr.push_back(node);
        ll cnt=0;
        for(auto child :apple[node]){
            if(!visit[child]){
                cnt++;
                parent[child]=node;
                st.push(child);
                visit[child]=1;
            }
        }
        if(!cnt)
            ways[node]=1;
    }
    // cout<<endl;
    // for(ll i=0;i<=n;i++){
    //     cout<<i<<" "<<parent[i]<<endl;
    // }
    reverse(arr.begin(),arr.end());
    for(auto i : arr){
        ways[parent[i]]+=ways[i];
    }
    // cout<<"ways"<<endl;
    // for(ll i=0;i<=n;i++){
    //     cout<<i<<" "<<ways[i]<<endl;
    // }
}

void solve(){
    ll n, q;
    scll(n);
    vector<vector<ll>>apple(n+1);
    ll x, y;
    for(ll i=0;i<n-1;i++){
        scll(x);    scll(y);
        apple[x].push_back(y);
        apple[y].push_back(x);
    }
    vector<ll>ways(n+1,0);
    bfs(apple,ways,n);
    scll(q);
    for(ll i=0;i<q;i++){
        scll(x);    scll(y);
        cout<<ways[x]*ways[y]<<endl;
    }
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
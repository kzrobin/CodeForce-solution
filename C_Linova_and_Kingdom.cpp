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

bool sort_level_ngh(const pair<ll,pair<ll,ll>>&a, const pair<ll,pair<ll,ll>>&b){
    return (a.second.second-a.second.first)>(b.second.second-b.second.first);
}
void solve(vector<vector<ll>>&graph, ll n,ll k){
    bool visit[n+1]={};
    ll node;
    queue<ll>q;
    q.push(1);
    visit[1]=true;
    queue<vector<ll>>path;
    path.push(vector<ll>(1,1));
    vector<ll>neighbour(n+1,0);
    vector<ll>level(n+1,0);
    while(!q.empty()){
        node=q.front();                 q.pop();
        vector<ll>temp=path.front();    path.pop();
        ll check=0;
        for(auto child : graph[node]){
            if(!visit[child]){
                level[child]=level[node]+1;
                q.push(child);
                temp.push_back(child);
                path.push(temp);
                temp.pop_back();
                ++check;
                visit[child]=true;
            }
        }
        for(auto i :temp)
                neighbour[i]+=check;
    }
    // cout<<"neighbour"<<endl;
    // for(ll i=1;i<=n;i++){
    //     cout<<i<<" "<<neighbour[i]<<" level "<<level[i]<<endl;
    // } 

    vector<pair<ll,pair<ll,ll>>>magic(n);
    for(ll i=0;i<n;i++){
        magic[i]={i+1,{neighbour[i+1],level[i+1]}};
    }
    sort(magic.begin(),magic.end(),sort_level_ngh);

    // for(auto i : magic){
    //     cout<<i.first<<" ngh "<<i.second.first<<" lvl "<<i.second.second<<endl;
    // }
    ll ans=0;
    for(ll i=0;i<k;i++){
        ans+=(magic[i].second.second-magic[i].second.first);
    }
    cout<<ans<<endl;
}


int main(){
    ll n,k;
    scll(n);
    scll(k);
    vector<vector<ll>>graph(n+1);
    for(ll i=0;i<n-1;i++){
        ll u, v;
        scll(u);    scll(v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    solve(graph,n,k);
return 0;
}
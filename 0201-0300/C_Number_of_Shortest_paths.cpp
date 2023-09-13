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
const ll mod=1e9+7;
ll sortest_paths_BFS(vector<ll> graph[],ll target){
    vector<ll>level(target+1,0);
    vector<ll>path(target+1,0);
    queue<ll>q;
    q.push(1);
    level[1]=1;
    path[1]=1;
    while(!q.empty()){
        ll node=q.front();
        ll lvl=level[node];
        q.pop();

        for(auto child : graph[node]){
            if(!level[child]){
                q.push(child);
                level[child]=(lvl+1)%mod;
                path[child]=path[node];
            }
            else if(level[node]+1==level[child]){
                path[child]=(path[child]%mod+path[node]%mod)%mod;
            }
        }
    }

    // for(ll i=1;i<=target;i++){
    //     cout<<i<<" "<<path[i]<<endl;
    // }
    return path[target];
}
int main(){
    ll n,m;
    scll(n); scll(m);
    vector<ll>graph[n+1];
    for(ll i=0;i<m;i++){
        ll u,v;
        scll(u); scll(v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    ll paths=sortest_paths_BFS(graph,n);
    cout<<paths<<endl;
return 0;
}
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


pair<ll,ll> BFS(vector<vector<pair<ll,ll>>>& graph,vector<bool>visit,ll src){
    ll node;
    ll present=0;
    visit[src]=1;
    pair<ll,ll>value={0,0};
    queue<ll>spend;     spend.push(0);
    queue<ll>q;         q.push(src);
    
    while(!q.empty()){
        node = q.front();           q.pop();
        present=spend.front();      spend.pop();
        for(auto child : graph[node]){
            if(!visit[child.first]){
                q.push(child.first);
                visit[child.first]=1;
                spend.push(present+child.second);
                if(value.second<present+child.second)
                    value={child.first,present+child.second};
            }
        }
    }
    return value;
}


ll solve(){
    // cout<<"solve"<<endl;
    ll n;
    scll(n);
    vector<vector<pair<ll,ll>>>graph(n);
    vector<bool>visit(n,false);

    for(ll i=0;i<n-1;i++){
        ll u,v,w;
        scll(u); scll(v);scll(w);
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    // for(ll i=0;i<n;i++){
    //     cout<<i<<"->";
    //     for(auto j : graph[i])
    //             cout<<"("<<j.first<<" "<<j.second<<")";
    //         cout<<endl;
    //     }

    pair<ll,ll> cost=BFS(graph,visit,0);
    cost=BFS(graph,visit,cost.first);
    return cost.second;
}
int main(){
    ll n;
    scll(n);
    for(ll i=1;i<=n;i++){
        printf("Case %lld: %lld\n",i,solve());
    }
return 0;
}
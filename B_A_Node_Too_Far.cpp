#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
ll cnt=1;
void BFS_reach(unordered_map<ll,vector<ll>>&net, unordered_map<ll,ll>TTL, ll node, ll t){
    queue<ll>q;
    q.push(node);
    TTL[node]=1;
    for(ll i=0;i<t;i++){
        ll x=q.size();
        for(ll j=0;j<x;j++){
            ll ngb=q.front();
            q.pop();
            for(auto z:net[ngb]){
                // cout<<"z "<<z<<endl;
               if(!TTL[z]){
                q.push(z);
                TTL[z]=1;
                }
            }
        }
    }
    ll x=0;
    for(auto i : TTL)
        if(i.second==0)
            x++;
    printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",cnt,x,node,t);
    cnt++;
}
void solve(ll n){
    unordered_map<ll,vector<ll>>net;
    unordered_map<ll,ll>TTL;
    for(ll i=0;i<n;i++){
        ll x,y;
        scll(x);
        scll(y);
        net[x].push_back(y);
        net[y].push_back(x);
        TTL[x]=0;
        TTL[y]=0;
    }

    while(1){
        ll x,y;
        scll(x);scll(y);
        if(!x && !y)
            return;
        BFS_reach(net,TTL,x,y);
    }
}

int main(){
    while(1){
        ll n;
        scll(n);
        if(n==0)
            exit(0);
        solve(n);
    }
return 0;
}
// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<map>
// #include<cmath>
// #include<cstring>
// #include<queue>
// #include<stack>
// #define scll(n) scanf("%lld",&n)
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// typedef long long ll;
// using namespace std;

// char visit[20001];

// ll bicolor_BFS(vector<ll> graph[],ll node){
//     visit[node]='b';
//     queue<ll>q;
//     q.push(node);
//     while(!q.empty()){
//         node=q.front();
//         char color= visit[node]=='b'? 'w':'b';
//         q.pop();
//         for(auto child : graph[node]){
//             if(visit[child]=='a'){
//                 q.push(child);
//                 visit[child]=color;
//             }
//         }
//     }
//     ll b=0,w=0;
//     for(ll i=1;i<=20001;i++){
//         if(visit[i]=='b'){
//             b++;
//             visit[i]='z';
//         }
//         else if(visit[i]=='w'){
//             w++;
//             visit[i]='z';
//         }
//     }
//     return max(b,w);
// }

// ll solve(){
//     ll n;
//     vector<ll>graph[20001];
//     scll(n);
//     for(ll i=0;i<n;i++){
//         ll u,v;
//         scll(u); scll(v);
//         graph[u].push_back(v);
//         graph[v].push_back(u);
//         visit[u]='a';
//         visit[v]='a';
//     }


//     ll ans=0;
//     for(ll i=1;i<20001;i++){
//         if(visit[i]=='a'){
//             ans+=bicolor_BFS(graph,i);
//             // bicolor_BFS(graph,i);
//         }
//     }
//     return ans;
// }


// int main(){
//     ll n;
//     scll(n);
//     for(ll i=1;i<=n;i++){
//         memset(visit,'1',sizeof(visit));
//         printf("Case %lld: %lld\n",i,solve());
//     }
// return 0;
// }

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
const ll N=200001;

ll Bipertite(vector<vector<ll>>&graph, vector<ll>&visit,ll node){
    ll b1=1, w0=0;
    visit[node]=1;
    ll color;

     queue<ll>q;
     q.push(node);
     while(!q.empty()){
        node=q.front();
        q.pop();
        color=visit[node]^1;
        for(auto child : graph[node]){
            if(visit[child]==2){
                q.push(child);
                visit[child]=color;
                if(color) ++b1;
                else ++w0;
            }
        }
     }
     return max(b1,w0);
}

ll solve(){
    vector<vector<ll>>graph(N);
    vector<ll>visit(N,-1);
    ll m;
    scll(m);
    for(ll i=0;i<m;i++){
        ll u,v;
        scll(u); scll(v);
        graph[u].push_back(v);
        graph[v].push_back(u);
        visit[u]=2;
        visit[v]=2;
    }
    ll ans=0;
    for(ll i=1;i<N;i++){
        if(visit[i]==2)
            ans+=Bipertite(graph,visit,i);
    }
    return ans;
}
int main(){
    ll n;
    scll(n);
    for(ll i=1;i<=n;i++){
        printf("Case %lld: %lld\n",i,solve());
    }
return 0;
}
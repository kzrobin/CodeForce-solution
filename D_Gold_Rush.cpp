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
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;


void sec_solve(){
    ll n, m;
    scll(n);    scll(m);
    if(n<m){
        cout<<"NO"<<endl;
        return;
    }
    ll x=1;
    for(ll i=0;x<=n;i++,x*=3){
        if(!(n%x)){
            ll y=1;
            ll temp=n/x;
            for(ll j=0;j<=i;j++,y*=2){
                if(temp*y==m){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        else break;
    }
    cout<<"NO"<<endl;
    return;
}



// multimap<ll,pair<ll,string>>myMap;
// void solve(){
//     ll n, m;
//     scll(n);    scll(m);

//     if(!myMap.empty()){
//         auto it=myMap.find(n);
//         if(it!=myMap.end()){
//             if(it->second.first==m){
//                 cout<<it->second.second<<endl;
//                 return;
//             }
//         }
//     }
//     if(n<m){
//         myMap.emplace(n,make_pair(m,"NO"));
//         cout<<"NO"<<endl;
//         cout<<" ";
//         return;
//     }
//     queue<ll>q;
//     bool visit[n+1]={};
//     q.push(n);
//     visit[n]=true;

//     while(!q.empty()){
//         ll x=q.front();
//         q.pop();
//         if(x==m){
//             myMap.emplace(n,make_pair(m,"YES"));
//             cout<<"YES"<<endl;
//             return;
//         }
//         if(!(x%3)){
//             ll y=x/3;
//             if(y==m || 2*y==m){
//                 myMap.emplace(n,make_pair(m,"YES"));
//                 cout<<"YES"<<endl;
//                 return;
//             }
//             if(y>m && !visit[y]){
//                 q.push(y);
//                 visit[y]=1;
//             }
//             if(2*y>m && !visit[2*y]){
//                 q.push((2*y));
//                 visit[2*y]=1;
//             }
//         }
//     }
//     myMap.emplace(n,make_pair(m,"NO"));
//     cout<<"NO"<<endl;
//     return;
// }


int main(){
    ll t;
    scll(t);
    while(t--){
        sec_solve();
    }   
return 0;
}
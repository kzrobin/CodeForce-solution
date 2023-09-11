#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

// void check(vector<pair<ll,ll>>&ideal,ll k){

//     bool be=false ,en=false;
//     if(!ideal.empty()){
//         for(auto i : ideal){
//             if(i.first==k)
//                 be=true;
//             if(i.second==k)
//                 en=true;
//         }
//     }
//     if(be && en){
//         printf("YES\n");
//         return;
//     }
//     printf("NO\n");
// }
void solve(){
    ll n,k;
    scanf("%lld%lld",&n,&k);
    bool be=false,en=false;
    for(int i=0;i<n;i++){
        ll l, r;
        scanf("%lld%lld",&l,&r);
        if(l==k)
            be=true;
        if(r==k)
            en=true;

    }
    // for(auto i : ideal){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl<<endl
    // check(ideal,k);
    if(be && en)
        printf("YES\n");
    else printf("NO\n");
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}
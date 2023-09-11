#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<unordered_map>
#define ll long long
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll n,t;
void solve(){
    scanf("%lld",&n);
    // cin>>n;
    map<ll,ll>myMap;
    ll fre=0;
    ll x;
    for(int i=0;i<n;++i){
        scanf("%lld",&x);
        // cin>>x;
        myMap[x]++;
        if(fre<myMap[x])
            fre=myMap[x];
    }
    if(fre==n){
        printf("0\n");
        // cout<<0<<'\n';
        return;
    }
    ll req=n-fre;
    ll cnt;

    for(cnt=0;fre<n;++cnt){
        fre*=2;
    }

    req=req+cnt;
    printf("%lld\n",req);
    // cout<<req<<'\n';
}
signed main(){
    scanf("%lld",&t);
    // cin>>t;
    while(t--){
       solve();
    }
return 0;
}
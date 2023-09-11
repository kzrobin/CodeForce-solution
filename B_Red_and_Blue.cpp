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
void solve(){
    ll n, m;
    ll x;

    scll(n);
    ll arr1[n+1]={};
    ll a1=0;
    for(ll i=1;i<=n;i++){
        scll(x);
        arr1[i]=arr1[i-1]+x;
        a1=max(a1,arr1[i]);
    }

    scll(m);
    ll arr2[m+1]={};
    ll a2=0;
    for(ll i=1;i<=m;i++){
        scll(x);
        arr2[i]=arr2[i-1]+x;
        a2=max(a2,arr2[i]);
    }
    printf("%lld\n",a1+a2);
}

int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
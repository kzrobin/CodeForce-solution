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


void solve(){
    ll n;
    scanf("%lld",&n);;
    vector<ll>NIT(n);
    ll zero=0;
    for(ll i=0;i<n;i++){
        scanf("%lld",&NIT[i]);
        if(NIT[i]==0)
            zero++;
    }
    // ll zero=count(NIT.begin(),NIT.end(),0);
    if(zero==n){
        printf("0\n");
        return;
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(NIT[i]==0)
            cnt++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(NIT[i]==0)
            cnt++;
        else break;
    }
    if(zero==cnt){
        printf("1\n");
        return;
    }
    printf("2\n");
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}
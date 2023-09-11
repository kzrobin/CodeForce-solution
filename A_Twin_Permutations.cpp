#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    ll n;
    scll(n);
    ll x;
    for(ll i=0;i<n;i++){
        scll(x);
        printf("%lld ",n-x+1);
    }
    printf("\n");
}
int main(){
    ll n;
    scll(n);
    while(n--)
        solve();

return 0;
}
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
    ll n, m, k, H;
    scll(n);     scll(m);
    scll(k);     scll(H);

    ll cnt=0;
    for(ll i=0;i<n;i++){
        ll x;
        scll(x);
        if(x!=H){
        x=abs(x-H);
        if(x%k==0 & (x/k)+1<=m)
            cnt++;
        }
    }
    printf("%lld\n",cnt);
    return;
}
int main(){
    ll t;
    scll(t);

    while(t--){
        solve();
    }
return 0;
}
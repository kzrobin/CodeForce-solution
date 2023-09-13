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
    ll n;
    scll(n);
    ll cnt=0;

    for(ll i=1;i<=n;i++){
        ll x;
        scll(x);
        // cout<<x<<" ";
        if(x==i)
            cnt++;
    }
    cnt=ceil(cnt/2.0);
    printf("%lld\n",cnt);
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
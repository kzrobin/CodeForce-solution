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
    ll ans=1;

    for(ll i=1;i<=10000 && i<=n;i++){
        if(n%i==0){
            cnt=0;
            ll x=n;
            while(!(x%i) && i<=n && i<=10000){
                cnt++;
                i++;
            }
            ans=max(ans,cnt);
        }
    }

    ans=max(ans,cnt);
    cout<<ans<<endl;
}
int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
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
typedef unsigned long long ull;
using namespace std;

ll sum_squares(ll n){
    return (n*(n+1)*(2*n+1))/6;
}

void solve(){
    ll n;
    scll(n);

    ll k=n/2;
    ll sum;
    ll ans=0;
    ll x;
    for(ll i=k;i<=n;i++){
        ll k=0;
        sum=sum_squares(i-1);
        for(ll j=i;j<=n;j++){
            x=j*(n-j+i);
            sum+=x;
            k=max(k,x);
        }
        sum-=k;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
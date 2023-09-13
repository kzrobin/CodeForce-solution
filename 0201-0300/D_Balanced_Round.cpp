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
    ll n, k;
    scll(n);
    scll(k);
    vector<ll> pblm(n);
    for(ll i=0;i<n;i++){
        scll(pblm[i]);
    }
    sort(pblm.begin(),pblm.end());

    ll cnt=1, ans=0;

    for(ll i=1;i<n;i++){
        if(pblm[i]-pblm[i-1]<=k){
            cnt++;
            }
        else{
            ans=max(cnt,ans);
            cnt=1;
        }
    }
    ans=max(cnt,ans);
    cout<<n-ans<<endl;
    
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
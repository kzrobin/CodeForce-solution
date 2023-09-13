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
    scanf("%lld",&n);
    vector<ll>ladder(n);
    for(ll i=0;i<n;i++){
        scanf("%lld",&ladder[i]);
    }
    sort(ladder.begin(),ladder.end());
    ll k=ladder[n-2]-1;

    
    printf("%lld\n",(k>=n-2?n-2:k));
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}
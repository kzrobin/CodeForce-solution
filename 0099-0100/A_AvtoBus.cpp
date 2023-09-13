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
    if(n%2 || n<4){
        printf("%lld\n",static_cast<ll>(-1));
        // cout<<"-1"<<endl;
        return;
    }
    ll mini=n/6; 
    if(n%6) mini++;
    ll maxi=n/4;
    printf("%lld %lld\n",mini,maxi);
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}
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
     ll n, k;
     scanf("%lld%lld",&n,&k);
     ll SIZE=n*k;
     vector<ll>dec(SIZE);
     for(ll i=0;i<SIZE;++i){
          scanf("%lld",&dec[i]);
     }
     sort(dec.begin(),dec.end());


     ll median=ceil(n/2.0);
     ll sum=0;
     ll cnt=1;
     ll j=n-median+1;
     
     for(int i=SIZE-j;cnt<=k;i-=j,cnt++){
          sum+=dec[i];
     }
     cout<<sum<<endl;
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
     solve();
    }
return 0;
}
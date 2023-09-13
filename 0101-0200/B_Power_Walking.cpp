#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<set>
#include<cstring>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
     ll n, x;
     scanf("%lld",&n);
     set<ll>power;

     for(ll i=0;i<n;i++){
          scanf("%lld",&x);
          // power[x]++;
          if(power.count(x)) continue;
          power.insert(x);
     }
     x=power.size();
     for(int i=1;i<=n;i++){
         printf("%lld ", (i>x) ? i:x);
     }
     printf("\n");
}

int main(){
     ll t;
     scanf("%lld",&t);
     while(t--){
          solve();
     }

return 0;
}
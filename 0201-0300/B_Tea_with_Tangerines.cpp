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
     vector<ll>ten(n);
     for(ll i=0;i<n;i++){
          scanf("%lld",&ten[i]);
     }
     sort(ten.begin(),ten.end());
     ll x=ten[0],step=0;
     for(int i=1;i<n;i++){
          if(2*x<=ten[i]){
               step+=((ceil(ten[i]/(long double)(2*x-1)))-1);
          }
     }
     printf("%lld\n",step);
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
     solve();
    }
return 0;
}
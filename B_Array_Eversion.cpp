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
     vector<ll>eversion(n);
     ll max=-1, max_pos;
     for(ll i=0;i<n;i++){
          scanf("%lld",&eversion[i]);
          // if(eversion[i]>=max){
          //      max=eversion[i];
          //      max_pos=i;
          // }
     }
     ll cnt=0;
     ll flag=eversion[n-1];

     for(ll i=n-2;i>=0;--i){
          if(flag<eversion[i]){
               flag=eversion[i];
               cnt++;
          }
     }
     printf("%lld\n",cnt);
}
int main(){
     ll t;
     scanf("%lld",&t);
     while(t--){
          solve();
     }
return 0;
}
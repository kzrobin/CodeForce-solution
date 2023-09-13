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
     vector<ll>vec(n);
     for(ll i=0;i<n;i++)
          scanf("%lld",&vec[i]);
     ll cnt=0;
     for(ll i=0;i<n;i++){
          while(!(vec[i]%2)){
               vec[i]/=2;
               cnt++;
          }
     }
     
     sort(vec.begin(),vec.end());

     ll sum=vec[n-1]*pow(2,cnt);
     for(ll i=0;i<n-1;i++){
          sum+=vec[i];
     }
     printf("%lld\n",sum);
}
int main(){
     ll t;
     scanf("%lld",&t);
     while(t--){
          solve();
     }
return 0;
}
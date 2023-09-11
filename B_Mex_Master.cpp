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
     vector<ll>arr(n);
     for(ll i=0;i<n;i++){
          scanf("%lld",&arr[i]);
     }
     
     ll zero=count(arr.begin(),arr.end(),0);
     if(zero-1<=n-zero){
          printf("0\n");
          return;
     }
     sort(arr.begin(),arr.end());
     for(ll i=zero;i<n-1;i++)
          arr[i]+=arr[i+1];
     ll flag=1;
     for(ll i=zero;i<n;i++)
          if(arr[i]==flag)
               flag++;
     printf("%lld\n",flag);
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
          solve();
    }
return 0;
}
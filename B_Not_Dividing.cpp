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
     for(ll i=0;i<n;i++)
          scanf("%lld",&arr[i]);


     ll cnt=0;
     for(ll i=0;i<n-1;i++){
          if(arr[i]==1)
               ++arr[i];
     }
       for(ll i=0;i<n-1;i++){
          if(!(arr[i+1]%arr[i]))
               ++arr[i+1];
     }
     for(auto i:arr)
          cout<<i<<" ";
     cout<<endl;
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
          solve();
    }
return 0;
}
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
     vector<ll>a(n);
     vector<ll>b(n);
     for(ll i=0;i<n;i++)                                                                                                                                   
          scanf("%lld",&a[i]);

     for(ll i=0;i<n;i++)
          scanf("%lld",&b[i]);
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     for(ll i=0;i<n;i++){
          if(a[i]==b[i] || a[i]+1==b[i]) continue;

          printf("NO\n");
          return;
     }
      printf("YES\n");
}

int main(){
     ll t;
     scanf("%lld",&t);
     while(t--){
          solve();
     }
return 0;
}
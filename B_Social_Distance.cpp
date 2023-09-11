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
     ll n,m;
     scanf("%lld%lld",&n,&m);
     
      if(n>=m){
          for(ll i=0;i<n;i++)
               scanf("%*lld");
          printf("NO\n");
          return;
     }

     vector<ll>chair(n);
     ll total=n;
     for(ll i=0;i<n;i++){
          scanf("%lld",&chair[i]);
          total+=chair[i];
     }
     sort(chair.rbegin(),chair.rend());
     total=total-chair[n-1]+chair[0];
     if(total<=m)
          printf("YES\n");
     else printf("NO\n");
}
int main(){
     ll t;
     scanf("%lld",&t);
     while(t--){
          solve();
     }
return 0;
}
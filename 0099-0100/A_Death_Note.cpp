#include<iostream>
#include<vector>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
     ll n,m;
     scanf("%lld%lld",&n,&m);
     vector<ll>death(n+1,0);
     for(ll i=1;i<=n;i++){
          ll x;
          scanf("%lld",&x);
          death[i]=x+death[i-1];
          }
     ll cnt=0;
     for(ll i=1;i<=n;i++){
          ll temp=death[i]/m;
          printf("%lld ",temp-cnt);
          cnt=temp;
     }
return 0;
}
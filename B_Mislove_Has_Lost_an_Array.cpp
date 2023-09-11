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

int main(){
     ll n, l, r;
     scanf("%lld%lld%lld",&n, &l, &r);
     ll mini=0;
     ll maxi=0;
     ll flag=1;
     
     mini=n-l+1;

     for(ll i=1;i<l;i++){
          flag*=2;
          mini+=flag;
     }
     flag=1;
     for(int i=1;i<=r;i++){
          maxi+=flag;
          flag*=2;
     }
     flag/=2;
     for(int i=r;i<n;i++){
          maxi+=flag;
     }

    printf("%lld %lld\n",mini, maxi);
return 0;
}
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
     ll n;
     scanf("%lld",&n);
     vector<ll>dis(n);
     for(int i=0;i<n;i++)
          scanf("%lld",&dis[i]);
     sort(dis.begin(),dis.end());
     ll x=0;
     for(ll i=0;i<n/2;i++)
          x+=dis[i];
     ll y=0;
     for(ll i=n/2;i<n;i++)
          y+=dis[i];
     printf("%lld\n",y*y+x*x);
return 0;
}
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
     vector<ll>odd;
     vector<ll>eve;

     ll p;
     for(ll i=0;i<n;++i){
          scanf("%lld",&p);
          if(p%2)
               odd.push_back(p);
          else eve.push_back(p);
     }
     ll y=odd.size(), x=eve.size();

     if(x==y || x+1==y || x==y+1){
          printf("0\n");
          exit(0);
     }
     if(x>y){
          sort(eve.rbegin(),eve.rend());
          ll sum=0;
          for(ll i=y+1;i<x;++i)
               sum+=eve[i];
          printf("%lld\n",sum);
     }
     else{
          sort(odd.rbegin(),odd.rend());
          ll sum=0;
          for(ll i=x+1;i<y;++i)
               sum+=odd[i];
          printf("%lld\n",sum);
     }
return 0;
}
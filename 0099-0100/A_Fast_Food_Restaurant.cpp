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
     vector<ll>k(3);
     ll a,b,c;
     scanf("%lld%lld%lld",&k[0],&k[2],&k[1]);
     sort(k.rbegin(),k.rend());

     a=k[0];
     b=k[1];
     c=k[2];
     ll cnt=0;
     // cout<<a<<" "<<b<<" "<<c<<endl;
     if(a){
          --a;
          cnt++;
     }
      if(b){
          --b;
          cnt++;
     }
      if(c){
          --c;
          cnt++;
     }
     // cout<<a<<" "<<b<<" "<<c<<endl;
     if(a&&b){
          --a;
          --b;
          cnt++;
     }
     if(b&&c){
          --b;
          --c;
          cnt++;
     }
     if(c&&a){
          --a;
          --c;
          cnt++;
     }
     // cout<<a<<" "<<b<<" "<<c<<endl;
     if(a && b && c)
          cnt++;
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
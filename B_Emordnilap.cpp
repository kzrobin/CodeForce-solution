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

const ll k=1000000007;
vector<ll> fact(100001,0);

void set_fact(vector<ll> &fact){
     fact[0]=1;
     for(ll i=1;i<=100000;i++)
          fact[i]=(fact[i-1]*i)%k;
}
void set_result(){
     for(ll i=1;i<=100000;i++){
          ll result=(i*(i-1))%k;
          result*=fact[i];
          result%=k;
          fact[i]=result;
     }
}
void solve(){
     ll n;
     scanf("%lld",&n);
     // ll result=(n*(n-1))%k;
     // result*=fact[n];
     // result%=k;
     printf("%lld\n",fact[n]);
}
int main(){
     set_fact(fact);
     set_result();
     ll t;
     scanf("%lld",&t);
     while(t--){
          solve();
     }

return 0;
}
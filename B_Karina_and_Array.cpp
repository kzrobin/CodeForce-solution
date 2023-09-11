#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    vector<ll>posi;
    vector<ll>negi;
    ll x;
    ll n;
     ll a=0,b=0;
    scll(n);
    if(n==2){
        scll(a); scll(b);
        printf("%lld\n",a*b);
        return;
    }
    for(ll i=0;i<n;i++){
        scll(x);
        if(x<0)
            negi.push_back(x);
        else posi.push_back(x);
    }
  
    sort(posi.rbegin(),posi.rend());
    sort(negi.begin(),negi.end());
   
    if(posi.size()>1)
        a=posi[0]*posi[1];
    if(negi.size()>1)
        b=abs(negi[0])*abs(negi[1]);
    printf("%lld\n",max(a,b));
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}

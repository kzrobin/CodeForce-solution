#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    ll n, m;
    scll(n);    scll(m);
    vector<ll> a(n);
    vector<ll> b(m);
    for(auto i : a)
        scll(i);
    for(auto i : b)
        scll(i);
    
    ll sum=0;
    for(auto i : a)
        sum=(sum^i);
    
    ll x_min=INT32_MAX, x_min=INT32_MAX;

    
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
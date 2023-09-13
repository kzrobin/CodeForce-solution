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

int main(){
    ll n,k;
    scll(n);
    scll(k);
    vector<ll>speed(n);
    for(ll i=0;i<n;i++){
        scll(speed[i]);
    }
    sort(speed.rbegin(),speed.rend());

    printf("%lld",speed[k-1]);
return 0;
}
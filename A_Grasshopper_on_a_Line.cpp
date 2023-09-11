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
    ll x,k;
    scll(x); scll(k);
    if((x%k)){
        printf("1\n%lld\n",x);
        return;
    }
    printf("2\n%lld 1\n",x-1);
    return;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
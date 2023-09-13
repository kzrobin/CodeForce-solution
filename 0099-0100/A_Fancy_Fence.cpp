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
using namespace std;
void solve(){
    ll n;
    scll(n);
    for(ll i=0;i<n;i++){
        ll x;
        scll(x);
        ll temp=180-x;
        if(360%temp)
            printf("NO\n");
        else printf("YES\n");
    }
}
int main(){
    solve();
return 0;
}
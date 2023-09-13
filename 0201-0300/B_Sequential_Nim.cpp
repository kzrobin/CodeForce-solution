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

void ans(int x){
    if(x)
        printf("YES\n");
    else
        printf("NO\n");
}
void solve(){
    ll n;
    scll(n);
    vector<ll>piles(n);
    ll one=0, one_=0;
    for(ll i=0;i<n;i++){
        scll(piles[i]);
        if(piles[i]==1)
            one++;
        else one_++;
    }
    ll cnt=0;
    for(ll i=0;i<n-1;i++){
        if(piles[i]==1){
            cnt++;
            continue;
        }
        break;
    }
    if(cnt%2){
        printf("Second\n");
    }
    else printf("First\n");
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
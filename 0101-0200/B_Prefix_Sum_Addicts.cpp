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
    ll n, k;
    scll(n);    scll(k);
    vector<ll> prefix(k);
    for(ll i=0;i<k;i++){
        scll(prefix[i]);
    }

    if(n==1 || k==1){
        printf("YES\n");
        return;
    }
    for(ll i=k-1;i>=1;i--){
        prefix[i]=prefix[i]-prefix[i-1];
    }

    for(ll i=1;i<k-1;i++){
        if(prefix[i]<=prefix[i+1])
            continue;
        printf("No\n");
        return;
    }
    ll place = (n-k)+1;

    ll target = prefix[0];

    if(ceil(target/(long double)place)<=prefix[1])
        printf("Yes\n");
    else printf("No\n");   
}
int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
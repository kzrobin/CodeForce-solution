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
    ll sum;
    scll(sum);
    ll n=(-1+sqrt(1+8*sum))/2;
    printf("%lld\n",n);

    ll extra=sum-(n*n+n)/2;
    for(ll i=1;i<=n;i++){
        if(i==n)
            printf("%lld ",i+extra);
        else printf("%lld ",i);
    }
    printf("\n");
}
int main(){
    solve();
return 0;
}
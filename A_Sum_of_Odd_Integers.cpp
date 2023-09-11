#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
// #include<bitset>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;

int main(){
    ll n;
    scll(n);
    ll x, y;
    for(ll i=0;i<n;i++){
        scll(x);    scll(y);
        ll root=sqrt(x);
        if(x<y || y>root)
            printf("NO\n");
        else if(((x%2) && (y%2)) || (!(x%2) && !(y%2)))
            printf("YES\n");
        else printf("NO\n");
    }
return 0;
}
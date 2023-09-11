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
    ll n, m, x, y;
    scanf("%lld %lld %lld %lld",&n, &m, &x, &y);

    char ch='2', wh;
    ll a=0, b=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            scanf(" %c",&wh);
            if(wh=='.'){
                if(ch=='1'){
                    a--;
                    b++;
                    ch='2';
                }
                else{
                    a++;
                    ch='1';
                }
            }
            else ch='2';
        }
        ch='2';
    }
    
    ll cost= (2*x<=y) ? (a*x+b*2*x) : (a*x+b*y); 
    printf("%lld\n",cost);
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
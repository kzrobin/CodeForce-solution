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
    
    ll qua=0, win=0;
    ll a,b;
    for(ll i=1;i<=n;i++){
        scll(a);    scll(b);
        if(a<=10){
            if(b>qua){
                win=i;
                qua=b;
            }
        }
    }
    printf("%lld\n",win);
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
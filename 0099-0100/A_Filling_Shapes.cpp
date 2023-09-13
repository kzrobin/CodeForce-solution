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
    if(n%2)
        printf("0\n");
    else{
        ll cost=pow(2,n/2);
        printf("%lld\n",cost);
    }
}
int main(){
    solve();   
return 0;
}
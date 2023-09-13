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
    ll a,b,c;
    scll(a);    scll(b);    scll(c);

    ll k=abs(a-b);
    k=ceil(k/(c*2.0));
    cout<<k<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
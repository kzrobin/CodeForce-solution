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


void solve(){
    ll n, k, x;
    scll(n);    scll(k);    scll(x);
    if(k>n || k-1>x){
        printf("-1\n");
        return;
    }

    ll sum=(k*(k-1))/2;
    if(x==k)
        sum+=(n-k)*(x-1);
    else
        sum+=(n-k)*(x);
    cout<<sum<<endl;

}
int main(){
    ll n;
    scll(n);
    while(n--)
        solve();
return 0;
}
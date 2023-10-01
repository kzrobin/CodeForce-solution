#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<set>
#include<cstdint>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
set<ull> check;
void ans(int x){
    if(x)
        printf("YES\n");
    else
        printf("NO\n");
}
void set_value(){
    ll cnt=0;
    // insert value for k=2 to 1e6 and i>=2
    ull k, n=1e18;
    uint64_t sum;
    uint64_t y;
    for(ll i=2;i<=1e6;i++){
        sum=1+i+i*i;
        y=i*i;
        double b=log10(i), a;
        while(sum<n && y){
            cnt++;
            check.insert((ull)sum);
            a=log10(y);
            if(a+b>18)
                break;
            y*=i;
            sum+=y;
        }
    }
}
void solve(){
    ull n;
    cin>>n;
    if(n<7){
        ans(0 || n>10e9);
        return;
    }
    if(check.count(n)){
        ans(1);
        return;
    }
    ull x=ceil(sqrt(4*n-3));
    // cout<<x<<endl;
    x=x-1;
    x=x/2;
    x=1+x+x*x;
    if(x==n){
        ans(1);
        return;
    }
    x=floor(sqrt(4*n-3));
    // cout<<x<<endl;
    x=x-1;
    x=x/2;
    x=1+x+x*x;
    if(x==n){
        ans(1);
        return;
    }
    ans(0);
}

int main(){
    set_value();
    // cout<<check.size()<<endl;
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
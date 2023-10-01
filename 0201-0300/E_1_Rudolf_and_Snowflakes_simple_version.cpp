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
    ull n;
    scll(n);
    if(n<7){
        ans(0);
        return;
    }
    ull sum, y;
    ull x=n-1;
    ull k=sqrt(n);
    for(ll i=2;i<=k;i++){
        sum=i+i*i;
        y=i*i;
        if(sum>x)
            break;
        while(sum<=x){
            if(sum==x){
                cout<<i<<endl;
                ans(1);
                return;
            }
            // cout<<sum<<" ";
            y*=i;
            sum+=y;
        }
        // cout<<endl;
    }
    ans(0);
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
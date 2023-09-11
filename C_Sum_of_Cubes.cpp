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
    unsigned long long n,x,y,i,j;
    cin>>n;
    x=1;
    y=j=n;

    if (n==1){
        printf("NO\n");
        return;
    }
    while(x<=y){
        i=x*x*x;
        ++x;
        // cout<<i<<" ";
        j=n-i;
        j=cbrt(j);
        // cout<<j<<endl;
        y=j;
        j=j*j*j;
        if(i+j==n){
            printf("YES\n");

            return;
        }
    }
    printf("NO\n");
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
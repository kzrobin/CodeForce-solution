#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
     ll n,a,b;
     scanf("%lld%lld%lld",&n,&a,&b);
     if(n>=a+b+2 || (a==n && b==n))
          printf("Yes\n");
     else printf("No\n");
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
          solve();
    }
return 0;
}
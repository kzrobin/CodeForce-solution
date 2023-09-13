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
     ll n,k;
     scanf("%lld%lld",&n, &k);
     if(!(n%2))
          printf("YES\n");
     else if(k%2)
          printf("YES\n");
     else printf("NO\n");
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
     solve();
    }
return 0;
}
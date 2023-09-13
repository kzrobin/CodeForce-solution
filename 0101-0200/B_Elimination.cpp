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

int main(){
    ll t;
     ll a,b,c,d;
    scanf("%lld",&t);
    while(t--){
          scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
          printf("%lld\n",max(a+b,c+d));
    }

return 0;
}
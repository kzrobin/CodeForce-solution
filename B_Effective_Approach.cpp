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
int main(){
   ll n;
   scll(n);
   vector<ll>arr(100001,0);
   ll x;
   for(ll i=1;i<=n;i++){
        scll(x);
        arr[x]=i;
   }
   ll m, va(0), pe(0);
   scll(m);
   for(ll i=0;i<m;i++){
        scll(x);
        va+=arr[x];
        pe+=(n-arr[x]+1);
   }
   cout<<va<<" "<<pe<<endl;
return 0;
}
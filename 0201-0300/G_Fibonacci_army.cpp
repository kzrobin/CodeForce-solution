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

int main(){
ll n;
scll(n);
vector<ll>fibo(n+1,1);
for(ll i=2;i<=n;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
}

cout<<fibo[n];
return 0;
}
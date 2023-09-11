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
const ll N=1e7+7;
void solve(){
    char s[100000];
    scanf(" %s",s);
    ll len=strlen(s);
    vector<ll>arr(len,0);
    ll cnt=0;
    for(ll i=1;i<len;i++){
        if(s[i-1]==s[i])
            cnt++;
        arr[i]=cnt;
    }
    ll n;
    scll(n);
    for(ll i=0;i<n;i++){
        ll x,y;
        scll(x);    scll(y); 
        printf("%lld\n",arr[y-1]-arr[x-1]);
    }
}
int main(){
    solve();
return 0;
}
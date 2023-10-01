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
    ll len;
    string s;
    scll(len);
    cin>>s;
    ll ans=len-1;
    for(ll i=0;i<len-2;i++){
        if(s[i]==s[i+2])
            --ans;
    }
   
    cout<<ans<<endl;
}
int main(){
    ll n;
    scll(n);
    while(n--)
        solve();
return 0;
}
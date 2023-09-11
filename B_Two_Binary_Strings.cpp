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
    string s1,s2;
    cin>>s1>>s2;
    ll len = s1.size();

    for(ll i=0;i<len-1;i++){
        if(s1[i]=='0' && s2[i]=='0' && s1[i+1]=='1' && s2[i+1]=='1'){
            ans(1);
            return;
        }
    }
    ans(0);
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
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
    vector<ll>v(3);
    for(ll i=0;i<3;i++){
        scll(v[i]);
    }

    for(ll i=0;i<2;i++){
        for(ll j=i+1;j<3;j++){
            if(v[i]+v[j]>=10){
                printf("YES\n");
                return;
            }
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
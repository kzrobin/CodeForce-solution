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
    ll n, odd=0, evn=0;
    scll(n);
    vector<ll>prt(n);
    for(ll i=0;i<n;i++){
        scll(prt[i]);
        if(prt[i]%2)
            odd++;
        else evn++;
    }
    if(!(odd%2)){
        printf("YES\n");
        return;
    }
    sort(prt.begin(),prt.end());
    for(ll i=1;i<n;i++){
        if(prt[i]-prt[i-1]==1){
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
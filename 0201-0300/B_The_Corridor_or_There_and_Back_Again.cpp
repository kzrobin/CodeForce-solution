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
    ll n;
    scll(n);
    vector<pair<ll,ll>>trap(n);
    for(auto &i : trap){
        scll(i.first); scll(i.second);
    }
    // for(auto &i : trap){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    ll k=299;
    for(auto i : trap){
        k=min(k,(i.first+(i.second-1)/2));
    }
    cout<<k<<endl;
}
int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
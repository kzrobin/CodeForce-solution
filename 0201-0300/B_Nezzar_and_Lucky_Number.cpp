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
    ll q, d;
    scll(q); scll(d);
    vector<ll>lucky(q);
    for(auto &i : lucky)
        scll(i);
    for(ll i=0;i<q;i++){
        ll x=lucky[i];
        while(x>0){
            string s=to_string(x);
            ll cnt=count(s.begin(),s.end(),d+'0');
            if(cnt){
                ans(1);
                break;
            }
            else x-=d;
        }
        if(x<0)
            ans(0);
    }
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
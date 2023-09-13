#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    ll n;
    scll(n);
    vector<bool>check(n+1,false);
    ll flag=0;
    vector<pair<ll,ll>>tree(n-1);
    for(ll i=0;i<n-1;i++){
        scll(tree[i].first); scll(tree[i].second);
    }
    check[1]=true;
    ll cnt=1;
    while(cnt!=n){
        flag++;
        for(ll i=0; i<n-1;i++){
            if(check[tree[i].first] && !check[tree[i].second]){
                check[tree[i].second]=true;
                cnt++;
                }
        }
    }
    
    printf("%lld\n",flag);
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
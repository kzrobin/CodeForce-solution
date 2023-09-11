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
    ll n;
    scll(n);
    map<ll,ll>game;
    for(ll i=0;i<n;i++){
        ll x;
        scll(x);
        game[x]++;
    }

    ll fst=game.size();
    ll lst=0;
    for(auto it=game.begin(); it!=game.end();++it){
        lst=max(it->second,lst);
    }
    if(lst>fst){
        cout<<fst<<endl;
    }
    else if(lst<fst){
        cout<<lst<<endl;
    }
    else cout<<(fst-1)<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
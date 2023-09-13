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
    ll cards,cnt=0;
    scll(cards);

    while(cards>1){
        cnt++;
        for(ll i=1;(i*2+i-1)<=cards;i++){
            cards-=(i*2+i-1);
        }
    }
    cout<<cnt<<endl;
    
}
int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
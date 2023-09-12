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
    ll n, x, tower=0;
    scll(n);
    vector<ll>arr[n+1];
    for(ll i=1;i<=n;i++){
        scll(x);
        arr[x].push_back(i);
    }
    ll cnt, index;
    for(ll i=1;i<=n;i++){
        if(!arr[i].empty()){
            cnt=1;  index=arr[i][0];
            x=arr[i].size();
            for(ll j=1;j<x;j++){
                if((arr[i][j]-index)%2){
                    cnt++;
                    index=arr[i][j];
                }
            }
            printf("%lld ",cnt);
        }
        else printf("0 ");
    }
    printf("\n");
}

int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
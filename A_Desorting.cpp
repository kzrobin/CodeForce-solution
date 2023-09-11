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
    vector<ll> arr(n);
    for(ll i=0;i<n; i++){
        scll(arr[i]);
    }

    ll diff=1e10;
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            printf("0\n");
            return;
        }
        else diff=min(diff,(arr[i]-arr[i-1]));
    }
    if(diff%2){
        printf("%lld\n",(diff+1)/2);
    }
    else printf("%lld\n",diff/2+1);
}
int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
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
    vector<ll>arr(n), s_arr;
    for(auto &i : arr)
        scll(i);
    s_arr=arr;
    sort(s_arr.begin(),s_arr.end());
    for(ll i=0;i<n;i++){
        if(arr[i]%2!=s_arr[i]%2){
            ans(0);
            return;
        }
    }
    ans(1);
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
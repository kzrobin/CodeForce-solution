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
    vector<ll>arr(n);
    for(auto &i : arr)
        scll(i);
    sort(arr.begin(),arr.end());

    // for(auto i : arr)
    //     cout<<i<<" ";
    // cout<<endl;

    ll k=1;
    if(arr[0]!=k){
        ans(0);
        return;
    }
    for(ll i=1;i<n;i++){
        // cout<<k<<" ";
        if(arr[i]<=k){
            k+=arr[i];
            continue;
        }
        ans(0);
        return;
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
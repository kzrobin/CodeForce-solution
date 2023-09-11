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
    ll min=arr[n-1], cnt=0;
    for(ll i=n-2;i>=0;i--){
        if(arr[i]>min){
            cnt++;
        }
        else min=arr[i];
    }
    cout<<cnt<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
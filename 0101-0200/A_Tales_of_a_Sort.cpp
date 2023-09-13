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
    vector<ll>arr(n);
    for(auto &i : arr)
        scll(i);

    ll cnt=0;
    vector<ll>pre=arr;
    sort(pre.begin(),pre.end());
    for(ll i=n-1;i>=0;i--){
        if(pre[i]==arr[i])
            continue;
        else{
            cout<<pre[i]<<endl;
            return;
        }
    }
    cout<<"0"<<endl;
}
int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
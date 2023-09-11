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
    ll n;
    scll(n);
    ll cnt=0;
    vector<ll>arr(n);
    for(auto &i : arr){
        scll(i);
        if(i<0){
            i=-i;
            cnt++;
        }
    }
    sort(arr.begin(),arr.end());
    ull sum;
    if(cnt%2){
        sum=-2*arr[0];
    }
    else sum=0;
    for(auto i : arr)
        sum+=i;
    cout<<sum<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
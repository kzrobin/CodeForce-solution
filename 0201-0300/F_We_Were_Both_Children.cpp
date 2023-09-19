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
    ll n, x;
    scll(n);
    map<ll,ll>arr;
    for(ll i=0;i<n;i++){
        scll(x);
        if(x<=n)
            arr[x]++;
    }
    vector<ll>check(n+1,0);
    for(auto i : arr){
        for(ll j=1;j<=n;j++){
            if(j*i.first>n)
                break;
            check[j*i.first]+=i.second;
        }
    }
    ll ans=*max_element(check.begin(),check.end());
    cout<<ans<<endl;
}

int main(){
    ll t;
    scll(t);
    while(t--)
        solve();   
return 0;
}
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
      ll n, m;
    scll(n);    scll(m);
    vector<vector<ll>>arr(m,vector<ll>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)
            scll(arr[j][i]);
    }

    ll sum=0;
    for(ll i=0;i<m;i++){
        ll cnt=0;
        sort(arr[i].begin(),arr[i].end());
        for(ll j=0;j<n;j++){
            sum+=-(n-1-j)*arr[i][j]+arr[i][j]*j;
        }
    }
    cout<<sum<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
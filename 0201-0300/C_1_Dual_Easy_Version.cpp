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
    vector<ll>prefix(n);
    for(auto &i : prefix)
        cin>>i;

    ll mx=*max_element(prefix.begin(),prefix.end());

    cout<<mx<<endl;

    for(ll i=0;i<n;i++)

}
int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
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

int main(){
    ll n,k;
    scll(n); scll(k);
    vector<ll>walk(n);
    for(auto &i : walk)
        scll(i);
    ll ans=0;
    vector<ll>pre=walk;
   
    ll flag=0;
    for(ll i=0;i<n-1;i++){
       
        ll x=walk[i]+walk[i+1];
        if(x>=k){
            continue;
        }
        else {
            walk[i+1]+=(k-x);
        }
    }
     for(ll i=0;i<n;i++){
        ans+=(walk[i]-pre[i]);
    }
    cout<<ans<<endl;
    for(auto i : walk)
        cout<<i<<" ";

return 0;
}
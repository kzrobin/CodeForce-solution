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
    ll n,m;
    scll(n);
    scll(m);
    vector<ll>health(n+1,0);
    for(ll i=1;i<=n;i++){
        scll(health[i]);
    }
    for(ll i=0;i<m;i++){
        ll x;
        scll(x);
        if(health[x]>0){
            // swap(health[x],health[n]);
            for(ll i=x+1;i<n;i++)
                health[i]--;
        }
    }
    for(ll i=1;i<=n;i++){
        if(health[i]>=0)
        cout<<health[i]<<" ";
        else cout<<"0 ";
    }
return 0;
}
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
    vector<ll>a(n), b(n), c(n);
    for(auto &i : a)
        cin>>i;
    for(auto &i : b)
        cin>>i;
    for(ll i=0;i<n;i++)
        c[i]=a[i]-b[i];
    
    ll x=*(max_element(c.begin(),c.end()));
    cout<<count(c.begin(),c.end(),x)<<endl;
    for(ll i=0; i<n;i++)
        if(c[i]==x)
            cout<<i+1<<" ";
    cout<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
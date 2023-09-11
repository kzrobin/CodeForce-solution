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
    vector<ll>arr(n);
    for(auto &i: arr)
        scll(i);

    vector<ll>st=arr;
    sort(st.begin(),st.end());
    for(ll i=0;i<n-2;i++){
        if(st[i]==st[i+1] && st[i]==st[i+2]){
            cout<<"YES"<<endl;
            return;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+2;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
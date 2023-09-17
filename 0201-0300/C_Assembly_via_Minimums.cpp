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

bool sort_value(pair<ll,ll> &a, pair<ll,ll> &b){
    return a.second>=b.second;
}

void solve(){
    ll n, x;
    scll(n);
    ll b_size=(n*(n-1))/2;
    vector<ll>b(b_size);
    map<ll,ll>arr;
    for(ll i=0;i<b_size;i++){
        scll(x);
        arr[x]++;
    }
    vector<pair<ll,ll>>ar;
    for(auto i=arr.begin(); i!=arr.end();i++){
        ll a=i->first, b=i->second;
        ar.push_back({a,b});
    }

    // sort(ar.begin(), ar.end(),sort_value);
    // for(auto i : ar)
    //     cout<<i.first<<" "<<i.second<<endl
    // cout<<endl<<endl;
    for(auto i : ar){
        ll a=i.first, b=i.second;
        while(b){
            cout<<a<<" ";
            b-=(n-1);
            n--;
        }
        x=a;
    }
    cout<<x<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
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
    vector<ll>w(n);
    vector<ll>h(n);
    ll total_w=0;
    for(ll i=0;i<n;i++){
        scll(w[i]); scll(h[i]);
        total_w+=w[i];
    }
    ll fst=0, snd=0;

    for(ll i=0;i<n;i++){
        if(h[i]>fst){
            snd=fst;
            fst=h[i];
        }
        else if(h[i]>snd)
            snd=h[i];
    }

// cout<<fst<<" "<<snd<<endl;

    for(ll i=0;i<n;i++){
        if(h[i]==fst)
            printf("%lld ",(total_w-w[i])*snd);
        
        else
            printf("%lld ",(total_w-w[i])*fst);
    }
}
int main(){
    solve();   
return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll n;
    scanf("%lld",&n);
    ll time=0;
    for(int i=0;i<n;i++){
        ll x;
        scanf("%lld",&x);
        time+=x;
    }
    ll k=0;;
    vector<ll>spell(n,0);
    for(int i=0;i<n;i++){
        scanf("%lld",&spell[i]);
        if(spell[k]<spell[i])
            k=i;
    }
    // sort(spell.begin(),spell.end());
    // // cout<<"spell"<<endl;
    ll s_time=0;
    for(int i=0;i<n;i++){
        if(i==k) continue;
        s_time+=spell[i];
    }
    
    time+=s_time;
    printf("%lld\n",time);
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }

return 0;
}
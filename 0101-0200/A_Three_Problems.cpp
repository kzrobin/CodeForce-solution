#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ll n;
    scll(n);
    map<ll,ll>cpx;
    for(ll i=1;i<=n;i++){
        ll x;
        scll(x);
        cpx[x]=i;
    }
    if(cpx.size()>=3){
        ll cnt=1;
        for(auto it=cpx.begin();it!=cpx.end();it++,cnt++){
            cout<<it->second<<" ";
            if(cnt==3){
                printf("\n");
                break;
            }
        }
    }
    else printf("-1 -1 -1\n");
return 0;
}
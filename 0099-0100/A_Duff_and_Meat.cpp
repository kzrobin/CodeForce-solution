#include<iostream>
#include<string>
#include<vector>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ll n;
    scanf("%lld",&n);
    ll price=1001;
    ll cost=0;
    ll x,y;
    for(ll i=0;i<n;i++){
        scanf("%lld%lld",&x,&y);
        price=min(price,y);
        cost+=price*x;
    }
    // cout<<cost<<endl;
    printf("%lld\n",cost);

return 0;
}
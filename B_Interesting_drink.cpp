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
    vector<ll>shop(n+1,0);
    for(ll i=1;i<=n;i++){
        scll(shop[i]);
    }
    sort(shop.begin(),shop.end());
    
    // for(auto i : shop)
    //     cout<<i<<" ";
    // cout<<endl;

    ll q;
    scll(q);
    for(ll i=0;i<q;i++){
        ll m;
        scll(m);
        ll left=0, right=n+1;
        while(left<right){
            ll mid=(left+right)/2;
            if(shop[mid]>m)
                right=mid;
            else left=mid+1;

            if(left<=n && shop[left]<=m)
                ++left;
        }
        printf("%lld\n",left-1);
    }
    
}
int main(){
    solve();
return 0;
}
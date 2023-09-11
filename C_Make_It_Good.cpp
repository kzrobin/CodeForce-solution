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
    vector<ll>prefix(n);
    for(auto &i : prefix)
        scll(i);

    if(n<=2){
        printf("0\n");
        return;
    }

    // for(auto i : prefix)
    //     cout<<i<<" ";
    // cout<<endl;
    bool flag=false;
    for(ll i=n-2;i>=0;i--){
        if(prefix[i]<prefix[i+1] && !flag ){
            flag=true;
            continue;
        }
        else if(prefix[i]>prefix[i+1] && flag){
            printf("%lld\n",i+1);
            return;
        }
    }
    printf("0\n");
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
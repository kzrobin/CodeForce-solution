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
    ll n, k;
    scll(n); scll(k);
    vector<vector<ll>>step(k+1,vector<ll>(1,0));


    for(ll i=1;i<=n;i++){
        ll x;
        scll(x);
        step[x].push_back(i);
    }

    for(ll i=1;i<=k;i++){
        step[i].push_back(n+1);
    }

    // for(auto i : step ){
    //     for(auto j : i)
    //         cout<<j<<" ";
    //     cout<< endl;
    // }

    ll ans=n/2;
    for(ll i=1;i<=k;i++){
        ll m=step[i].size();
        vector<ll>plank;

        for(ll j=0;j<m-1;j++){
            plank.push_back(step[i][j+1]-step[i][j]-1);
        }
        sort(plank.rbegin(),plank.rend());
        // for(auto w : plank)
        //     cout<<w<<" ";
        // cout<<endl;
        m=plank.size();
        if(m>=2)
            ans=min(ans,max((plank[0]/2),(plank[1])));
    }
    printf("%lld\n",ans);
    
    
 }
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
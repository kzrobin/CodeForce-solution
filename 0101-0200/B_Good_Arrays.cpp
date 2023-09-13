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
    vector<ll>arr(n);

    ll sum=0;
    for(auto &i : arr){
        scll(i);
        sum+=i;
    }

    if(n==1){
        printf("NO\n");
        return;
    }

    ll cnt=count(arr.begin(),arr.end(),1);
    // sort(arr.begin(),arr.end());
    // for(auto i : arr )
    //     cout<<i<<" ";
    // cout<<endl;
    sum-=(cnt*2);

    if(sum>0 && sum>=n-cnt)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
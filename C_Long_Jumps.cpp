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
    vector<bool>check(n,0);
    vector<ll>arr(n);
    for(auto &i : arr)
        scll(i);
    ll sum=0, presum=0,index;

    for(ll i=0;i<n;i++){
        if(!check[i]){
            index=i;
            presum=0;
            while(index<n){
                if(!check[index])
                    check[index]=true;
                else break;
                presum+=arr[index];
                index+=arr[index];
            }
            sum=max(sum,presum);
        }
    }
    cout<<sum<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
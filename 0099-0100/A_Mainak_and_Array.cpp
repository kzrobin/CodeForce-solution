#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<unordered_set>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll n;
    scanf("%lld",&n);
    vector<ll>arr(n);
    ll maxm=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        maxm=max(maxm,arr[i]);
    }
    vector<ll>max2;
    max2=arr;
    if(n==1){
        printf("0\n");
        return;
    }
    ll result=-1;
        for(int i=0;i<n-1;i++){
                result=max(result,(arr[i]-arr[i+1]));
        }
        for(int i=1;i<n;i++){
            result=max(result,arr[i]-arr[0]);
        }
        for(int i=0;i<n-1;i++){
            result=max(result,arr[n-1]-arr[i]);
        }
    printf("%lld\n",result);
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}
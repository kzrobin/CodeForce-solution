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

int main(){
    ll n;
    scanf("%lld",&n);
    vector<ll>sum(n);
    for(ll i=0;i<n;i++){
        scanf("%lld",&sum[i]);     
    }
    sort(sum.begin(),sum.end());
    ll left=0,right=n-1;
    ll result=0;
    while(left<right){
        result+=(sum[left]+sum[right])*(sum[left]+sum[right]);
        left++; right--;
    }
    printf("%lld",result);
return 0;
}
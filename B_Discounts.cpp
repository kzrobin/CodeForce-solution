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
    ll n,m,p;
    scll(n);
    ll sum=0;
    vector<ll>presum(n);
    for(ll i=0;i<n;i++){
        scll(presum[i]);
        // sum+=presum[i];
    }
    sort(presum.rbegin(),presum.rend());
    // vector<ll>decsorted=presum;

    for(ll i=0;i<n;i++){
       sum+=presum[i];
    }
    scll(m);
    for(ll i=0;i<m;i++){
        scll(p);
        printf("%lld\n",sum-presum[p-1]);
    }

return 0;
}
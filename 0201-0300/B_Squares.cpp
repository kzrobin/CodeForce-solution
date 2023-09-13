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
    ll n,k;
    scll(n);
    scll(k);
    if(k>n){
        printf("-1");
        exit(0);
    }
    vector<ll>squre(n);
    for(ll i=0;i<n;i++){
        scll(squre[i]);
    }
    sort(squre.rbegin(),squre.rend());
    printf("%lld %lld",squre[k-1],squre[k-1]);
return 0;
}
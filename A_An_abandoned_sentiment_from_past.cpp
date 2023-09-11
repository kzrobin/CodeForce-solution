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
    if(k>1){
        printf("Yes\n");
        exit(0);
    }
    ll flag;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        scll(arr[i]);
        if(!arr[i])
            flag=i;
    }
    scll(arr[flag]);
    for(ll i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]) continue;
        printf("Yes\n");
        exit(0);
    }
    printf("No\n");
return 0;
}
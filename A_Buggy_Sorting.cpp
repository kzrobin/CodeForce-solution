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
    ll n;
    scll(n);
    if(n==1 || n==2){
        printf("-1");
        exit(0);
    }
    for(ll i=n;i>0;i--){
        printf("%lld ",i);
    }
return 0;
}
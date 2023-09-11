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
    ll coca=0;
    ll x;
    for(ll i=0;i<n;i++){
        scll(x);
        coca+=x;
    }
    ll a=-1,b=1;

    for(ll i=0;i<n;i++){
        scll(x);
        if(x>a || x>b){
           if(x>a){
            b=a;
            a=x;
           }
           else b=x;
        }
    }
    if(a+b>=coca)
        printf("YES\n");
    else printf("NO\n");
return 0;
}
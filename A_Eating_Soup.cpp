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
    ll n,m;
    scll(n);
    scll(m);
    ll g=n/2;
    if(m<=g){
        printf("%lld\n",m>=1? m:1);

    }
    else printf("%lld",n-m);

}
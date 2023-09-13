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
    ll n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    vector<int>dish(n);
    for(ll i=0;i<n;i++)
        scanf("%d",&dish[i]);
    ll one=count(dish.begin(),dish.end(),1);
    ll two=count(dish.begin(),dish.end(),2);

    ll wash=0;
    if(one>m){
        wash=one-m;
        m=0;
    }
    else {
        m-=one;
    }
    if(m+k<two){
        wash+=(two-m-k);
    }
    printf("%lld",wash);
return 0;
}
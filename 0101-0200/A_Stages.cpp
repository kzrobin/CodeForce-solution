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
    char a[n+1];
    scanf("%s",a);
    char flag=0;
    ll weight=0;
    sort(a,a+n);
    // printf("%s",a);
    for(ll i=0;i<n && k;i++){
        if(flag+1<a[i]){
            weight+=(a[i]-'a'+1);
            flag=a[i];
            k--;
        }
    }
    if(!k)
        printf("%lld",weight);
    else printf("-1");
return 0;
}
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
    int n;
    scanf("%lld",&n);
    ll holy=(n/7)*2;
    ll rem=n%7;
    ll mini=holy+(rem>5 ? 1:0);
    ll maxi =holy+(rem>2 ? 2:rem);
    printf("%lld %lld\n",mini , maxi);


return 0;
}
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
    ll m,n,a;
    scll(m); scll(n); scll(a);
    ll result=(ceil(m/(long double)(a)) * ceil(n/(long double)(a)) );
    printf("%lld",result);
    
return 0;
}
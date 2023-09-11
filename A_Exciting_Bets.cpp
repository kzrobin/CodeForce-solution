#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

long long check(long long x, long long y){
    if(x == 0)
        return 0;
    long long rem = y % x;
    return min(rem,(x-rem));
}
int main(){
    long long t;
    scanf("%lld", &t);
        // cin>>t; 
    // for(int i=0;i<t;i++)
    while(t--){
        long long a, b;
        scanf("%lld%lld", &a, &b);
        // cin>>a>>b;
        long long x = abs(a - b);
        // long long y = check(x, a);
        printf("%lld %lld\n", x, check(x, a));
        // cout<<x<<" "<<y<<endl;
    }
    return 0;
}
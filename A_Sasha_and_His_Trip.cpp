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
    ll n,v;
    scanf("%lld%lld",&n,&v);
    if(n-1<+v){
          printf("%lld\n",n-1);
          exit(0);
    }
    
    ll  cost=v-1;
    ll kilo=n-1-cost;
    cost+=((kilo+1)*kilo)/2;
    printf("%lld\n",cost);
    
return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void ans(int x){
    if(x)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    ll x, sum=0;
    for(ll i=0;i<5;i++){
        scll(x);
        sum+=x;
    }
    if(!(sum%5) && sum){
        cout<<sum/5<<endl;
    }
    else cout<<"-1"<<endl;
return 0;
}
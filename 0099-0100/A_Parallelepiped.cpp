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
    ll ab, bc, ca;
    scll(ab);   scll(bc);   scll(ca);
    ll a=sqrt((ab*ca)/bc);
    ll c=ca/a;
    ll b=bc/c;
    cout<<4*(a+b+c)<<endl;
return 0;
}
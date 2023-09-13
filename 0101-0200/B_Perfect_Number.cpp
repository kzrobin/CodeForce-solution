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
    ll n;
    scll(n);
    ull k=19;
    for(ll i=1;i<=n;i++){
        // cout<<i<<" ";
        bool flag=true;

        while(flag){
            ull x=k, sum=0;
            while(x){
                sum+=x%10;
                x/=10;
            }
            if(sum==10){
                flag=false;
            }
            k++;
        }
    }
    cout<<k-1<<endl;


return 0;
}
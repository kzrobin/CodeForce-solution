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

int main(){
    ll a, b;
    scll(a); scll(b);
    ll cnt=0;
    if(a>1 || b>1){
        while(a>0 && b>0){
            cnt++;
            if(a>b){
                b+=1;
                a-=2;
            }
            else {
                b-=2;
                a+=1;
            }
        }
    }
    cout<<cnt<<endl;
return 0;
}
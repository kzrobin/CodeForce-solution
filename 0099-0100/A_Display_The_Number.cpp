#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ll t;
    // cout<<998244353-pow(10,5)<<endl;
    scanf("%lld",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll digit=n/2;
        // string num="";
        if(n%2){
            cout<<'7';
            digit--;
        }
        for(ll i=0;i<digit;i++){
            printf("%d",1);
        }
        printf("\n");
    }
return 0;
}
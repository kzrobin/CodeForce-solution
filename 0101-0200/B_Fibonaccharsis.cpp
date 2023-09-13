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
using namespace std;


void solve(){

    ll n, k;
    scll(n);
    scll(k);

    ll cnt=0;
    ll f1=ceil(n/2.0);
    ll f=f1;

    if(n==1){
        if(k>3){
            printf("0\n");
            return;
        }
        else{
            printf("1\n");
        return;
        }
    }
    while(f1<=n){
        ll f2=n;
        bool check=true;
        for(ll i=1;i<k-1 ;i++){
            // cout<<f1<<" ";
            ll temp=f1;
            f1=f2-f1;
            f2=temp;
            // cout<<"f1 "<<f1<<" f2 "<<f2<<endl;
            if(f1>f2){
                check=false;
                break;
            }
        }
        // cout<<endl;
        if(check)
            cnt++;
        f1=++f;
    }
    printf("%lld\n",cnt);
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
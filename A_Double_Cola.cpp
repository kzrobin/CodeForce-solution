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

int main(){
    ll n;
    scll(n);
    map<int,string>drink;
    drink[1]="Sheldon";
    drink[2]="Leonard";
    drink[3]="Penny";
    drink[4]="Rajesh";
    drink[5]="Howard";

    // if(n<=5){
    //     cout<<drink[n]<<endl;
    // }
    // else {
    //     ll i=ceil(log2(n/5.0));
    //     ll j=floor(log2(n/5.0));
    //     ll k=(n-pow(2,i-1)*5);
    //     if(i==j){
    //         k=ceil(k/pow(2,i));
    //         cout<<drink[k]<<endl;
    //     }
    //     else{
    //          k=ceil(k/pow(2,i-1));
    //         cout<<drink[k]<<endl;
    //     }
    // }

    ll sum=0,presum=0;
    ll k;
    for(ll i=1,j=1;sum<n;i++,j*=2){
        presum=sum;
        sum+=(5*j);
        k=i;
    //   cout<<sum<<" ";
    //   cout<<i<<endl;
    }

    // cout<<sum<<" "<<presum<<" "<<k<<endl;
    k=ceil((n-presum)/pow(2,k-1));
    cout<<drink[k]<<endl;

return 0;
}
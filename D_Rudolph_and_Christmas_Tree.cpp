#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<iomanip>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;

void solve(){
    ll n, d, h;
    scll(n);   scll(d);  scll(h);

    vector<ll>base(n);
    for(auto &i : base)
        scll(i);
    sort(base.begin(),base.end());
    long double result=0.0;
    for(ll i=0;i<n-1;i++){
        ll x=base[i+1]-base[i];
        if(x>=h){
            result+=(.5*h*d);
        }
        else{
            long double t= (d*(h-x))/(long double)(h);
            // cout<<t<<endl;

            long double area=(t+d)*x*.5;
            // cout<<"area "<<area<<" "<<endl;
            result+=area;
        }
    }
    result+=(.5*h*d);
    printf("%.7Lf\n",result);
}
int main(){
    // std::cout << "Digits after radix point (long double): "
    //           << std::numeric_limits<long double>::digits10 << std::endl;
    
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
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
    vector<ll>pylon(n+1,0);
    for(ll i=1;i<=n;i++){
        scll(pylon[i]);
    }

    // for(auto i :pylon){
    //     cout<<i<<" "; 
    // }
    // cout<<"\n";

    ll energy=0, cost=0;
    for(ll i=0;i<n;i++){
        // cout<<energy<<" "<<endl;
        if(energy>=0){
            energy+=pylon[i]-pylon[i+1];
        }
        else{
            cost-=energy;
            energy=pylon[i]-pylon[i+1];
        }
    }

    if(energy<0){
        cost-=energy;
    }
    cout<<cost<<endl;
return 0;
}
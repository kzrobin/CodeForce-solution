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

void solve(){
    ll n,x;
    scll(n);    scll(x);
    vector<ull> wealth(n);
    for(auto &i : wealth)
        cin>>i;
    sort(wealth.begin(),wealth.end());

    for(ll i=1;i<n;i++){
        wealth[i]+=wealth[i-1];
    }
    ull total=wealth[n-1];

    // cout<<total<<endl;

    for(ll i=0;i<n;i++){
        // cout<<n-i<<" "<<total<<" "<<wealth[i]<<endl;
        if(total/(n-i)>=x){
            cout<<n-i<<endl;
            return;
        }
        total=wealth[n-1]-wealth[i];
    }
    cout<<"0"<<endl;
}
int main(){
ll t;
scll(t);
while(t--){
    solve();
}   
return 0;
}
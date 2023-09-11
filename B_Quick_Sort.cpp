#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll solve(vector<ll>&quick, ll n, ll k){
    int flag=1;
    vector<bool>check(n+1,false);
    for(int i=0;i<n;i++){
        if(quick[i]==flag){
            check[flag]=true;
            flag++;
        }
    }
    // cout<<"cnt "<<cnt<<endl;
    int cnt=count(check.begin()+1,check.end(),false);
    return ceil(cnt/(long double)k);

}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n,k;
        scanf("%lld%lld",&n,&k);
        vector<ll>quick(n);
        for(int i=0;i<n;i++)
            scanf("%lld",&quick[i]);

        printf("%lld\n",solve(quick,n,k));
    }
return 0;
}
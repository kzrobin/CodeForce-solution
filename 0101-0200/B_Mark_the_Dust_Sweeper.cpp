#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll find_zero(vector<ll>&dust,ll n){
    for(ll i=0;i<n-1;i++)
        if(dust[i])
            return i;
    return -1;           
}
void solve(ll n){
   vector<ll>dust(n);
   ll sum=0;
   for(ll i=0;i<n;i++){
        scanf("%lld",&dust[i]);
        if(i!=n-1)
            sum+=dust[i];
   }
    ll pos=find_zero(dust,n);
    if(pos!=-1)
        sum+=count(dust.begin()+pos,dust.end()-1,0);
    printf("%lld\n",sum);

}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        solve(n);
    }
return 0;
}
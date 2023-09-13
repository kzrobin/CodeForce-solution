#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
     ll n,l,r;
     scanf("%lld%lld%lld",&n,&l,&r);
     vector<ll>left;
     vector<ll>right;

     vector<bool>check(n+1,true);

     check[l]=false;
     ll cnt=1;
     left.push_back(l);

     for(ll i=r+1;i<=n && cnt<n/2;i++){
          if(i>=l && check[i]){
               check[i]=false;
               cnt++;
               left.push_back(i);
          }
     }

     for(int i=l+1;i<=n && cnt<n/2;i++){
          if(check[i] && i>=l && i!=r){
               check[i]=false;
               cnt++;
               left.push_back(i);
          }
     }
     for(ll i=r;i>=1;--i){
          if(check[i])
               right.push_back(i);
     }

     if(left.size()==n/2 && right.size()==n/2){
          for(auto i:left)
               cout<<i<<" ";
          for(auto i:right)
               cout<<i<<" ";
          cout<<endl;
     }
     else cout<<"-1"<<endl;
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
     solve();
    }
return 0;
}
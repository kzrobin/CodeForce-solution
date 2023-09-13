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

vector<ll> check(vector<ll>&per){
     vector<ll> x;
     x=per;
     if(x.size()==1)
          return vector<ll>(1,-1);

     sort(x.begin(),x.end());
     for(int i=0;i<x.size();i++){
          if(per[i]==x[i]){
               if(i!=x.size()-1)
                    swap(x[i],x[i+1]);
               else swap(x[i-1],x[i]);
          }
     }
     return x;
}
void solve(){
     ll n;
     scanf("%lld",&n);
     vector<ll>per(n);
     for(ll i=0;i<n;i++)
          scanf("%lld",&per[i]);
     
     per=check(per);
     for(auto i:per)
          cout<<i<<" ";
     cout<<endl;
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
     solve();
    }
return 0;
}
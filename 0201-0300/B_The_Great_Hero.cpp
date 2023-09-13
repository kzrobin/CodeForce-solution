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
// bool sort_by_key(pair<ll,ll>&a,pair<ll,ll>&b){
//      return a.first<b.first;
// }

void solve(){
     ll A,B,n;
     scanf("%lld%lld%lld",&A,&B,&n);
     vector<ll>monster(n);
     multimap<ll,ll>myMap;
     ll x;
     for(int i=0;i<n;i++)
          scanf("%lld",&monster[i]);
     for(int i=0;i<n;i++){
          scanf("%lld",&x);
          myMap.insert({monster[i],x});
          }
    
     // cout<<"CHeck"<<endl;
     // for(auto i : myMap)
     //      cout<<i.first<<" : "<<i.second<<endl;
     
     // monster.clear();

     // for(auto i : myMap)
     //      monster.push_back(i);
     // sort(monster.begin(),monster.end(),sort_by_key);

     ll cnt=0;

     for(auto it=myMap.begin(); it!=myMap.end() && B>0;++it){
          ll x=ceil((*it).second/(long double)(A));
          if(x>1){
               B-=((*it).first)*(x-1);
               if(B>0){
                    B-=((*it).first);
                    cnt++;
               }
          }
          else {
               B-=((*it).first);
               cnt++;
          }
     }

     if(cnt==n)
          printf("YES\n");
     else printf("NO\n");
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
     solve();
    }
return 0;
}
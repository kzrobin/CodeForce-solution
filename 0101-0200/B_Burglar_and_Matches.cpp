// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<map>
// #include<cmath>
// #include<cstring>
// #define ll long long
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;

// bool sort_by_value(pair<ll,ll>&a,pair<ll,ll>&b){
//      return a.second>b.second;
// }
// int main(){
//      ll n,m;
//      scanf("%lld%lld",&n,&m);
//      vector<pair<ll,ll>>box(m);
//      ll a,b;
//      for(ll i=0;i<m;i++){
//           scanf("%lld %lld",&a,&b);
//           box[i]={a,b};
//      }
//      sort(box.begin(),box.end(),sort_by_value);
//      ll match=0;
//      for(ll i=0;i<m && n ;i++){
//           if(n>=box[i].first){
//                match+=(box[i].first*box[i].second);
//                n-=box[i].first;
//                continue;
//           }
//           match+=box[i].second*n;
//           n=0;
//      }
//      printf("%lld\n",match);
// return 0;
// }

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

bool sort_by_value(pair<ll,int>&a,pair<ll,int>&b){
     return a.second>b.second;
}
int main(){
     ll n,m;
     scanf("%lld%lld",&n,&m);
     multimap<int,ll>box;
     ll a,b;
     for(ll i=0;i<m;i++){
          scanf("%lld %lld",&a,&b);
          box.insert({b,a});
     }
     ll match=0;

     auto it=box.end();
     do{
          --it;
          if(n>=(*it).second){
               match+=((*it).second*(*it).first);
               n-=(*it).second;
               continue;
          }
          match+=(*it).first*n;
          n=0;
     }while(it!=box.begin() && n);
     
     printf("%lld\n",match);
return 0;
}
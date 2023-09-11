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

// int main(){
//      ll n;
//      scanf("%lld",&n);
//      vector<int>sushi(n);
//      for(ll i=0;i<n;i++){
//           scanf("%d",&sushi[i]);
//      }
//      bool check=true;
//      ll a=0;
//      ll b=0;
//      ll flag;
//      ll ans=0;
//      for(ll i=0;i<n;i++){
//           if(check){
//                flag=sushi[i];
//                ++a;
//                check=false;
//           }
//           else if(flag==sushi[i]){
//                a++;
//           }
//           else{
//                ans=max(ans,2*min(b,a));
//                check=true;
//                b=a;
//                a=0;
//                --i;  
//           }
//      }
//      ans=max(ans,2*min(b,a));
//      printf("%lld\n",ans);
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

int main(){
     ll n, x;
     scanf("%lld",&n);
      bool check=true;
     ll a=0;
     ll b=0;
     ll flag=0;
     ll ans=0;
   
     for(ll i=0;i<n;i++){
          scanf("%d",&x);
          if(flag==x)
               ++a;
          else{
               ans=max(ans,2*min(b,a));
               flag=x;
               b=a;
               a=1;;
          }
     }
     ans=max(ans,2*min(b,a));
     printf("%lld\n",ans);
return 0;
}
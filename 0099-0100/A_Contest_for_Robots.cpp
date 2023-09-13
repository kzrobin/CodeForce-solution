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
     ll n;
     scanf("%lld",&n);
     vector<int>robo(n);
     vector<int>bino(n);
     for(ll i=0;i<n;++i)
          scanf("%lld",&robo[i]);
     
     for(ll i=0;i<n;i++)
          scanf("%lld",&bino[i]);
     
     for(ll i=0;i<n;i++){
          if(robo[i]==bino[i]){
               robo[i]=0;
               bino[i]=0;
          }
     }
 
     ll x=count(robo.begin(),robo.end(),1);
     if(x==0){
          printf("-1");
          exit(0);
     }
 
     ll y=count(bino.begin(),bino.end(),1);
     // y= (y==0) ? 1 : ceil((y+1)/(long double)x);
     printf("%lld",(ll)(ceil((y+1)/(long double)x)));
return 0;
}
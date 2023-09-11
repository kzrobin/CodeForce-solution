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
     string s;
     cin>>s;
     ll x=s.size();
     string a=s.substr(0,1);
     string b=s.substr(1,1);
     string c=s.substr(2);
     // while(!(a<=b && c<=b) && c.size()>1){
     //      b+=c[0];
     //      c=c.substr(1);
     // }
     if(a<=b && c<=b || b<=a && b<=c){
           cout<<a<<" "<<b<<" "<<c<<endl;
           return;
     }

     b=s.substr(1,x-2);
     c=s.substr(x-1,1);
     if( a<=b && c<=b || b<=a && b<=c ){
          cout<<a<<" "<<b<<" "<<c<<endl;
          return;
     }
}
int main(){
     ll t;
     scanf("%lld",&t);
     while(t--){
          solve();
     }
return 0;
}
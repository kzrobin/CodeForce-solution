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
     char ch[1001];
     scanf("%s",ch);
     string s(ch);
     if(count(s.begin(),s.end(),s[0])==s.length()){
          printf("-1\n");
          return;
     }
     sort(s.begin(),s.end());
     printf("%s\n",s.c_str());
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
     solve();
    }
return 0;
}
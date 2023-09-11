#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll n;
    scll(n);
    string s;
    cin>>s;
    string a=(s.substr(1));
    string b=(s.substr(0,1));
    if(n==2 && b<a){
        printf("YES\n2\n%s %s\n",b.c_str(),a.c_str());
        return;
    }
    if(n>2){
        printf("YES\n2\n%s %s\n",b.c_str(),a.c_str());
        return;
    }
    printf("NO\n");
     
}
int main(){
    ll t; 
    scll(t);
     while(t--){
        solve();
     }
return 0;
}
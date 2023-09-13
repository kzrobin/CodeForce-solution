#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define scll(n) scanf("%lld",&n);
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll n;
    scll(n);
    char ar[n+1];
    scanf("%s",ar);
    string s(ar);
    ll zero=count(s.begin(),s.end(),'0');
    // if(zero==0 || zero==n){
    //     printf("0\n");
    //     return;
    // }
    ll cnt=0;
    char flag='1';
    for(ll i=s.find('1');i<n && i!=-1;i++){
        if(s[i]==flag) continue;
        cnt++;
        flag=s[i];
    }
    printf("%lld\n",cnt);
}
int main(){
ll t;
scll(t);
while(t--){
    solve();
}
return 0;
}
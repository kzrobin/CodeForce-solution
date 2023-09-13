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
    ll n;
    scanf("%lld",&n);
    char ch[n+1];
    scanf("%s",ch);
    string s(ch);
    ll reza_trun=ceil((n-1)/2.0);
    ll bre_trun=(n-1)/2;
    ll reza=0,bre=0;
    ll odd=0,eve=0;
    for(ll i=0;i<n;i++){
        int x=s[i]-'0';
           
        if((i+1)%2 && (x%2))
            odd++;
        if(!((i+1)%2) &&  !(x%2))
            eve++;
    }
    if(n%2){
        if(odd)
            printf("1\n");
        else printf("2\n");

        return;
    }
    else{
        if(eve)
            printf("2\n");
        else printf("1\n");

        return;
    }
    
}
int main(){
    ll T;
    scanf("%lld",&T);
    while(T--){
        solve();
    }
return 0;
}
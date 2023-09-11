#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    char arr[300000+1];
    scanf("%s",arr);
    string s(arr);
    string cost="";
    char ch='0';
    ll len=s.size();
    for(ll i=0;i<len;i++){
        if(s[i]!='?'){
            ch=s[i];
            break;
        }
    }

    for(ll i=0;i<len;i++){
        if(s[i]=='?')
            cost+=ch;
        else{
            cost+=s[i];
            ch=s[i];
        }
    }
    printf("%s\n",cost.c_str());
    return;
}

int main(){
    ll n;
    scll(n);
    while(n--)
        solve();
return 0;
}                                                               
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
    char arr[n+1];
    scanf(" %s",arr);
    string s(arr);
    ll cnt=0;
    bool check(true);
    ll ans=0;
    char ch='a';
    for(ll i=0;i<n;i++){
        // if(check==true){
        //     cnt=1;
        //     check=false;
        //     ch=s[i];
        // }
        if(ch==s[i]){
            cnt++;
        }
        else{
            ans=max(cnt,ans);
            cnt=1;
            ch=s[i];
        }
    }
    ans=max(cnt,ans);
    printf("%lld\n",ans+1);
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
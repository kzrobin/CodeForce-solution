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


void check(string &s){
    ll l,r;
    // ll size=s.size();

    scanf("%lld%lld",&l,&r);
    // string x=s.substr(l-1,r-l+1);
    // char ch=x[0];
    // string sub=s.substr(0,l-1);
    // if(sub.find(ch)!=-1){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // sub=s.substr(r,size-r+1);
    // ch=x[x.size()-1];
    // if(sub.find(ch)!=-1){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // cout<<"NO"<<endl;
    // return;
    for(int i=0;i<l-1;i++){
        if(s[i]==s[l-1]){
            printf("YES\n");
            return;
        }
    }
     for(int i=r;i<s.size();i++){
        if(s[i]==s[r-1]){
            printf("YES\n");
            return;
        }
     }
     printf("NO\n");
}
void solve(){
    ll n,p;
    scanf("%lld%lld",&n,&p);
    char ch[n+1];
    scanf("%s",ch);
    string s(ch);

    while(p--){
        check(s);
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
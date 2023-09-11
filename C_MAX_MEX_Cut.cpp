#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
void solve(){
    ll n;
    scll(n);
    char a1[n+1];
    char a2[n+1];
    scanf(" %s",a1);
    scanf(" %s",a2);
    ll ans =0;
    char pre='2';
    ll y(0);
    for(ll i=0;i<n;i++){
        if((a1[i]=='1' && a2[i]=='0') || (a1[i]=='0' && a2[i]=='1')){
            ans+=2;
            pre = '2';
            continue;
        }
        else if(a1[i]=='1' && a2[i]=='1'){
            if(pre=='0'){
                ans+=1;
                pre='2';
            }
            else pre='1';
        }
        else if((a1[i]=='0' || a2[i]=='0')){
            if(pre=='1'){
                ans+=2;
                pre='2';
            }
            else{
                ans+=1;
                pre='0';
            }
        }
    }
    printf("%lld\n",ans);
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
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
typedef unsigned long long ull;
using namespace std;
void solve(){
    string s;
    cin>>s;
    ll cnt=0, result=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='L')
            cnt++;
        else if(cnt){
            result=max(result,cnt);
            cnt=0;
        }
    }
    result=max(result,cnt);
    cout<<result+1<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
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

void ans(int x){
    if(x)
        printf("YES\n");
    else
        printf("NO\n");
}
void solve(){
    string s;
    cin>>s;
    ll one=count(s.begin(),s.end(),'1');
    ll zero=count(s.begin(),s.end(),'0');
    if(one && zero){
        string q;
        if(s[0]=='0')
            q="01";
        else q="10";
        ll k=one+zero;
        for(ll i=0;i<k;i++)
            cout<<q;
        cout<<endl;
    }
    else cout<<s<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
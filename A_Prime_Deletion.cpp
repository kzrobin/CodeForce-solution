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
    for(ll i=8;i>=0;i--){
        if(s[i]=='1'){
            cout<<31<<endl;
            return;
        }
        else if(s[i]=='3'){
            cout<<13<<endl;
            return;
        }
        else if(s[i]=='7'){
            cout<<17<<endl;
            return;
        }
        else if(s[i]=='9'){
            cout<<19<<endl;
            return;
        }
    }
}

int main(){
    ll n;
    scll(n);
    while(n--){
        solve();
    }
return 0;
}
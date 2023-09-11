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
    char arr[101];
    scanf(" %s",arr);
    string s(arr);
    ll len=s.size();
    bool fst(0), sec(0);
    // cout<<s<<endl;
    for(ll i=0;i<len-1;i++){
        if(s[i]=='1'&& s[i+1]=='1')
            fst=true;
        else if(s[i]==s[i+1] && s[i]=='0' && fst){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
    return;
}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
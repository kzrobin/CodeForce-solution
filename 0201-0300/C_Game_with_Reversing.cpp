//https://codeforces.com/problemset/problem/1834/C
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
    ll len, res1, res2;
    cin>>len;
    cin.ignore();
    string a, b;
    cin>>a;
    cin>>b;
    ll cnt1=0, cnt2=0;
    for(ll i=0;i<len;i++){
        if(a[i]!=b[i])  cnt1++;
        if(a[i]!=b[len-1-i]) cnt2++;
    }

    // cout<<cnt1<<" "<<cnt2<<endl;
    res1= cnt1%2 ? 2*cnt1-1 : 2*cnt1; 
    res2= cnt2!=0 ? ( cnt2 % 2 ? 2*cnt2 : 2*cnt2-1 ) : 2;
    printf("%lld\n",res1 <res2 ? res1 : res2);
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}



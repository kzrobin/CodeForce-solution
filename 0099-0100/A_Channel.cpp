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
    ll n, a, q;
    cin>>n>>a>>q;
    string s;
    cin>>s;
    ll in =0, out=0, avil =0;
    // check yes;
    ll temp=a;
    if(n==a){
        cout<<"YES"<<endl;
        return;
    }

    for(ll i=0;i<q;i++){
        if(s[i]=='-'){
            temp--;
            out--;
        }
        else {
            in++;
            temp++;
        }
        if(temp==n){
            cout<<"YES"<<endl;
            return;
        }
    }

    // check NO
    if(a+in<n){
        cout<<"NO"<<endl;
        return;
    }
    // check MAYBE
    cout<<"MAYBE"<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
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
const ll N=10e3+1;
 vector<string> st(1e5);
void solve(){
    ll n,q;
    scll(n);    scll(q);

    char arr[N];
    cin.ignore();
   
    for(ll i=0;i<n;i++){
        getline(cin,st[i]);
    }

    ll m;
    for(ll i=0;i<q;i++){
        scanf(" %s",arr);
        scll(m);
        ll a=N, z=0;
        string s1=st[m-1];
        string s2(arr);
        ll l_s1=s1.size();
        ll l_s2=s2.size();
        for(ll i=0;i<=l_s1-l_s2;i++){
            ll cnt=0;
            for(ll j=0;j<l_s2;j++){
                if(s1[j+i]!=s2[j]){
                    cnt++;
                    }
            }
            a=min(a,cnt); z=max(z,cnt);
        }
        printf("%lld %lld\n",a,z);
    }   
}
int main(){
    solve();
return 0;
}
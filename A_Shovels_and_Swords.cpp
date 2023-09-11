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
    ll p,q;

    scll(p);    scll(q);

    if(p*2<=q){
        cout<<p<<endl;
        return;
    }
    else if(q*2<=p){
        cout<<q<<endl;
        return;
    }

    ll k=0;
    if(p && q){
        if(p<q){
            k=q-p;
            p-=(k);
            q-=(2*k);
        }
        else if(p>q){
            k=p-q;
            p-=(2*k);
            q-=k;
        }
    }

    ll a=p,b=q;
    ll x=min(a/3,b/3);
    a-=x*3;
    b-=x*3;
    x*=2;
    if((a>0 && b>1)|| (a>1 && b>0))
        x++;
    cout<<k+x<<endl;

}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
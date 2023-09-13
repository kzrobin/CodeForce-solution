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
    ull a,b,x,y,n,res;
    scanf("%llu %llu %llu %llu %llu ",&a,&b,&x,&y,&n);
    ull temp=n;
    // first a check
    ull p=a,q=b;
    ull fst;
    if(p-x<=n){
        n-=(p-x);
        p=x;
        if(n){
            if(q-y<=n)
                q=y;
            else q-=n;
        }
    }
    else p-=n;

    fst=p*q;
    // secend check
    ull snd;
    n=temp;
    p=a; q=b;
    if(q-y<=n){
        n-=(q-y);
        q=y;
        if(n){
            if(p-x<=n)
                p=x;
            else p-=n;
        }
    }
    else q-=n;

    snd=p*q;

    res=min(fst,snd);
    // cout<<res<<endl;
    printf("%llu\n",res);
}
int main(){
     ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
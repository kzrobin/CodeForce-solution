//https://codeforces.com/problemset/problem/1832/C
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
    ll n;
    scll(n);
    vector<ll>cst;
    ll prs=-1, temp;
    for(ll i=0;i<n;i++){
        scll(temp);
        if(temp!=prs){
            cst.push_back(temp);
            prs=temp;
        }
    }
    n=cst.size();
    ll ans=1, i=0;
        while(i<n-1){
        if(cst[i]<cst[i+1])
            while(i<n-1 &&cst[i]<=cst[i+1])
                i++;
        else if(cst[i]>cst[i+1])
            while(i<n-1 && cst[i]>cst[i+1])
                i++;
        ans++;
    }
    printf("%lld\n",ans);

}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
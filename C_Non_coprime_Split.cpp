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
const ll N=1e7+1;
bool arr[N]={};

void prime(){
    for(ll i=2;i<N;i++){
        if(!arr[i]){
            for(ll j=i*i;j<N;j+=i)
                arr[j]=true;
        }
    }
}
void solve(){
    ll l, r;
    scll(l); scll(r);
    cout<<l<<" "<<r<<endl;
    ll k=l+r;
    ll rht=ceil(k/2.0);
    ll lft=k/2;
    cout<<lft+rht<<" "<<r<<endl;
    while(lft>=2 && lft+rht<=r){
        if(arr[lft] || arr[rht]){
            if(__gcd(lft,rht)!=1){
                cout<<lft<<" "<<rht<<endl;
                return;
            }
        }
        lft--;
        rht++;
    }
    cout<<"-1"<<endl;
}
int main(){
    arr[0]=true;
    arr[1]=true;
    prime();
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
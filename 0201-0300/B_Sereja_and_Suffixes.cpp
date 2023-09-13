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

const ll N=1e5+1;

int main(){
    ll check[N]={};
    ll n, m, x;
    scll(n);    scll(m);
    ll arr[n+2]={};
    vector<ll>hold(n);
    for(auto &i : hold)
        scll(i);

    for(ll i=n-1;i>=0;i--){
        if(!(check[hold[i]])){
            arr[i]=arr[i+1]+1;
            check[hold[i]]=1;
        }
        else arr[i]=arr[i+1];
    }

    for(ll i=0;i<m;i++){
        scll(x);
        printf("%lld\n",arr[x-1]);
    }
return 0;
}
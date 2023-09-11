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
ll N=1e9+1;
int main(){
    ll n;
    scll(n);
    vector<ll> debug(n);
    for(auto &i:debug){
        scll(i);
    }
    sort(debug.begin(),debug.end());

    vector<ll>fst_debug(n,0);
    for(ll i=0;i<n-1;i++){
        scll(fst_debug[i]);
    }
    sort(fst_debug.begin(),fst_debug.end()-1);
    for(ll i=0;i<n;i++){
        if(debug[i]!=fst_debug[i]){
            printf("%lld\n",debug[i]);
            break;
        }
    }

    vector<ll>lst_debug(n,0);
    for(ll i=0;i<n-2;i++){
        scll(lst_debug[i]);
    }
    sort(lst_debug.begin(),lst_debug.end()-2);
    for(ll i=0;i<n;i++){
        if(lst_debug[i]!=fst_debug[i]){
            printf("%lld\n",fst_debug[i]);
            break;
        }
    }
return 0;
}
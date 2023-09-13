#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<bitset>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;

int main(){
    ll  n, m, k;

    scll(n);    scll(m);    scll(k);

    vector<string>army(m+1);
    for(ll i=0;i<=m;i++){
        ll x;
        scll(x);
        bitset<20>binary(x);
        army[i]=binary.to_string();
    }

    // for(auto i : army){
    //     cout<<i.size()<<endl;
    // }
    ll cnt=0;
    for(ll i=0;i<m;i++){
        ll x=0;
        for(ll j=0;j<army[i].size();j++){
            if(army[i][j]!=army[m][j])
                x++;
        }
        if(x<=k)
            cnt++;
    }
    printf("%lld\n",cnt);
return 0;
}
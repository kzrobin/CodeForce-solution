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
    ll n;
    scll(n);
    vector<pair<ll,ll>>lap(n);
    for(auto &i : lap){
        scll(i.first);
        scll(i.second);
    }

    // for(auto i : lap){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    sort(lap.begin(),lap.end());
    // for(auto i : lap){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    for(ll i=0;i<n-1;i++){
        if(lap[i].second>lap[i+1].second && lap[i].first<lap[i+1].first){
            printf("Happy Alex\n");
            return;
        }           
    }
    printf("Poor Alex\n");
}
int main(){
    solve();
return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool sort_by_value(pair<ll,ll>&a,pair<ll,ll>&b){
    return a.second>b.second;
}
int main(){
    ll n;
    scanf("%lld",&n);
    vector<pair<ll,ll>>shot(n);
    for(int i=0;i<n;i++){
        shot[i].first=i+1;
        scanf("%lld",&shot[i].second);
    }

    ll mini=0;
    sort(shot.begin(),shot.end(),sort_by_value);
    for(ll i=0;i<n;i++){
        mini+=(shot[i].second)*i+1;
    }
    printf("%lld\n",mini);
    for(auto i: shot){
        printf("%lld ",i.first);
    }
    printf("\n");

return 0;
}
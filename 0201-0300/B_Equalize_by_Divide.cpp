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
    vector<ll>arr(n);
    for(auto &i : arr)
        scll(i);
    ll cnt=count(arr.begin(),arr.end(),1);
    if(cnt && cnt!=n){
        cout<<"-1"<<endl;
        return;
    }
    ll sml=*(min_element(arr.begin(),arr.end()));
    vector<pair<ll,ll>>ans;

    while(1){
         ll sml=((min_element(arr.begin(),arr.end()))-arr.begin());
         bool flag=true;
         for(ll j=0;j<n;j++){
            if(arr[sml]==arr[j])
                continue;
            arr[j]=ceil(arr[j]/(double)arr[sml]);
            ans.push_back({j+1,sml+1});
            flag=false;
         }
         if(flag)
            break;
    }
    // for(auto i : arr)
    //     cout<<i<<" ";
    // cout<<endl;

    cout<<ans.size()<<endl;
    for(auto i : ans)
        cout<<i.first<<" "<<i.second<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
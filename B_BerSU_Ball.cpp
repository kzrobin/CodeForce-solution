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

int main(){
    ll n, m;
    scll(n); 
    vector<ll>boy(n);
    for(auto &i : boy)
        cin>>i;
    scll(m);
    vector<ll>girl(m);
    for(auto &i : girl)
        cin>>i;
    
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());


    // for(auto i: girl)
    //     cout<<i<<" ";

    ll cnt=0;
    ll j=-1;
    for(ll i=0; i<n ; i++){
        for(ll k=j+1; k<m ; k++){
            // cout<<girl[k]<<" ";
            if(abs(boy[i]-girl[k])<=1){
                cnt++;
                j=k;
                break;
            }
        }
    }

    cout<<cnt<<endl;
return 0;
}
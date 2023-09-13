#include<iostream>
#include<string>
#include<vector>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll solve(vector<ll>&p){
    ll cnt=0;
    // cout<<"SIZE "<<p.size()<<endl;
    ll x=p.size();
    // cout<<"x "<<x<<endl;
    for(ll i=x-2;i>=0;i--){
        if(!p[i+1]){
            return -1;
        }

        if(p[i]>=p[i+1]){
            while(p[i]>=p[i+1] && p[i]){
                p[i]/=2;
                cnt++;
                }
        }
    }
    return cnt;
}


int main(){
    ll t;
    cin>>t;
    for(int j=0;j<t;j++){
        ll n; cin>>n;
        vector<ll>increase(n);
        for(int i=0;i<n;i++)
            scanf("%lld",&increase[i]);

        // cout<<solve(increase)<<endl;
        printf("%lld\n",solve(increase));
    }
return 0;
}
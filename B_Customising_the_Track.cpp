#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        // vector<ll>road(n);
        ll sum=0,x;
        for(ll i=0;i<n;i++){
            // scanf("%lld",&road[i]);
            scanf("%lld",&x);
            sum+=x;    
        }
        sum=sum%n;
        sum=sum*(n-sum);
        // cout<<sum<<endl;
        printf("%lld\n",sum);
    }
return 0;
}
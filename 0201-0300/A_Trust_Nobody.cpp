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

ll l_bound(const vector<ll>&arr, int n, int temp){
    ll ans=-1;
    ll lft=0, rht=n-1, mid;
    while(lft<=rht){
        mid=(lft+rht)/2;
        if(arr[mid]==temp){
            ans=mid;
            rht=mid-1;
        }
        else if(arr[mid]>temp)
            rht=mid-1;
        else lft=mid+1;
    }
    return ans;
}
void solve(){
    ll n;
    scll(n);
    vector<ll>arr(n);
    for(ll &i: arr)
        scll(i);

    ll x;
    sort(arr.begin(),arr.end());
    for(ll i=0;i<n;i++){  
        if(arr[i]<=n-1-i){
            if(i<n-1 && arr[i+1]>n-i-1){
                cout<<n-i-1<<endl;
                return;
            }
            else if(i==n-1){
                cout<<"0"<<endl;
                return;
            }
        }
    }
    cout<<"-1"<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
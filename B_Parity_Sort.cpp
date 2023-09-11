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
ll cnt=0;
bool sort_odd_even(ll &a, ll &b){
    cnt++;
    cout<<a<<" "<<b<<endl;
    return (a<=b && a%2==b%2);
}
void solve(){
    ll n;
    scll(n);
    vector<ll>arr(n+1,0);
    for(ll i=1;i<=n;i++){
        scll(arr[i]);
    }

    vector<ll> s_array;
    s_array=arr;
    sort(s_array.begin(),s_array.end());
    sort(arr.begin(),arr.end(),sort_odd_even);
    cout<<"cnt "<<cnt<<endl;


    // for(auto i : arr)
    //     cout<<i<<" ";
    // cout<<endl;

    // for(ll i=1;i<=n;i++){
    //     for(ll j=i+1;j<=n;j++){
    //         if(arr[i]>arr[j] && arr[i]%2==arr[j]%2)
    //             swap(arr[i],arr[j]);
    //     }

    // }

    // for(auto i: arr)
    //     cout<<i<<" ";
    // cout<<endl;

    if(s_array==arr)
        printf("YES\n");
    else printf("NO\n");
    return;
}

int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }   
return 0;
}
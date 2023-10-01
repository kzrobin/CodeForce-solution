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

void de_bug(vector<ll>arr, ll n){
    do{
        ll sum=0;
        vector<ll>per(n);
        vector<ll>check(n+1,false);
        for(ll i=0;i<n;i++){
            // cout<<arr[i]<<" ";
            sum+=arr[i];
            per[i]=(sum%n)+1;
            check[per[i]]=true;
        }
        ll cnt=count(check.begin()+1,check.end(),true);
        if(cnt==n){
            for(auto i : arr)
                cout<<i<<" ";
                cout<<endl;
            for(auto i : per)
                cout<<i<<" ";
                cout<<endl<<endl;
            
        }
    }while(next_permutation(arr.begin(),arr.end()));
}
void solve(){
    ll n;
    scll(n);
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    else if(n%2){
        cout<<"-1"<<endl;
        return;
    }
    for(ll i=n;i>0;i-=2){
        cout<<i<<" "<<n+1-i<<" ";
    }
    cout<<endl;
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();

    // ll n=6;
    // //scll(n);
    // vector<ll>arr(n);
    // for(ll i=0;i<n;i++)
    //     arr[i]=i+1;
    // de_bug(arr,n);
return 0;
}
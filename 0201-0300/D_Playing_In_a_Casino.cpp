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

int main(){
    ll n, m;
    scll(n);    scll(m);
    ll arr[n][m];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
            scll(arr[i][j]);
    ll sum=0, x;
    for(ll i=0;i<n-1;i++){
        for(ll j=0;j<m;j++){
            x=arr[i][j]-arr[i+1][j];
            if(x>0)
                sum+=x;
            else sum-=x;
        }
    }
    cout<<sum<<endl;
return 0;
}
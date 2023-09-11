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
    ll n, k;
    scll(n);     scll(k);
    vector<ll>fence(n);
    for(ll i=0;i<n;i++)
        scll(fence[i]);
    ll height=0;
    ll temp=0;

    for(ll i=0;i<k;i++){
        height+=fence[i];
    }
    temp=height;
    ll result=1;

    for(ll i=k;i<n;i++){
        height=height+fence[i]-fence[i-k];
        // cout<<height<<endl;
        if(height<temp){
            result=i-k+2;
            temp=height;
        }
    }
    printf("%lld\n",result);
return 0;
}
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

void ans(int x){
    if(x)
        printf("YES\n");
    else
        printf("NO\n");
}

void solve(){
    ll n;
    scll(n);
    vector<ull>prefix(n-1), arr(n-1);
    for(auto &i : prefix)
        cin>>i;

    if(prefix[n-2]>((n*(n+1))/2)){
        ans(0);
        return;
    }

    vector<bool>check(n+1,0);
    check[0]=true;

    arr[0]=prefix[0];
    for(ll i=0;i<n-2;i++){
        arr[i+1]=prefix[i+1]-prefix[i];
    }

    for(auto i : arr){
        if(i<=n)
            check[i]=true;
    }
    ll cnt =count(check.begin(),check.end(),0);

    if(prefix[n-2]<(n*n +n)/2 && cnt==1){
        ans(1);
        return;
    }
    else if(prefix[n-2]==(n*n +n)/2 && cnt==2){
        ans(1);
        return;
    }
    ans(0);

}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();


return 0;
}
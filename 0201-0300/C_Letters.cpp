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
    ll n,m;
    scll(n);
    scll(m);

    ll dor[n+1]; dor[0]=0;
    for(ll i=1; i<=n; i++){
        scll(dor[i]);
        dor[i]+=dor[i-1];
    }

    // for(auto i : dor)
    //     cout<<i<<" ";
    // cout<<endl;
    ll left=0;
    for(ll i=0; i<m ;i++){

        ll right = n;
        ll later ;
        scll(later);
        while(left<right){
            ll mid=(left+right)/2;
                if(dor[mid]>=later)
                     right=mid;
                else left=mid+1;
                if(dor[left]<later)
                    left++;
        }

        // cout<<later<<" "<<left<<endl;
        printf("%lld %lld\n",left, later-dor[left-1]);
    }
return 0;
}
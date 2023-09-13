#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdio>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    ll n,q;
    scanf("%lld%lld",&n,&q);
    vector<ll>iteam(n+1);
    iteam[0]=0;
    for(ll i=1;i<=n;i++)
        scanf("%lld",&iteam[i]);
    // iteam.push_back(0);
    sort(iteam.rbegin(),iteam.rend()-1);
    for(int i=1;i<=n;i++)
        iteam[i]=iteam[i]+iteam[i-1];

    // for(auto it : iteam)
    //     cout<<it<<" ";
    // cout<<endl;

    for(ll i=0;i<q;i++){
        ll x,y;
        scanf("%lld%lld",&x,&y);
        
        printf("%lld\n",iteam[x]-iteam[x-y]);
    }
    
return 0;
}
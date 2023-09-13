#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>

#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

void solve(){
    vector<ll>Vec(3);
    for(int i=0;i<3;i++)
        scanf("%lld",&Vec[i]);
    sort(Vec.begin(),Vec.end());

    // ll dis=dis=abs(Vec[1]-Vec[0])+abs(Vec[2]-Vec[1])+abs(Vec[2]-Vec[0]);

    if(Vec[2]-Vec[0]>1){
        Vec[2]-=1;
        Vec[0]+=1;
    }
    
    else if(Vec[2]-Vec[0]==1){
        if(Vec[0]==Vec[1])
            Vec[2]-=1;
        else Vec[0]+=1;
    }

    if(Vec[1]<Vec[0])
        Vec[1]++;
    else if(Vec[1]>Vec[2]) Vec[1]--;

    ll dis=abs(Vec[1]-Vec[0])+abs(Vec[2]-Vec[1])+abs(Vec[2]-Vec[0]);
    printf("%lld\n",dis);
     
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}

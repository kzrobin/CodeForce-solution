#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    vector<ll>recycle(3);
    for(ll i=0;i<3;i++)
        scll(recycle[i]);
    vector<ll>waste(5);
    for(ll i=0;i<5;i++)
        scll(waste[i]);
   
    for(ll i=0;i<3;i++){
        recycle[i]-=waste[i];
    }
    if(recycle[0]>0){
        if(recycle[0]>=waste[3])
            waste[3]=0;
        else waste[3]-=recycle[0];
    }
    if(recycle[1]>0){
        if(recycle[1]>=waste[4])
            waste[4]=0;
        else waste[4]-=recycle[1];
    }
    recycle[2]-=(waste[4]+waste[3]);
    if(recycle[0]>-1 && recycle[1]>-1 && recycle[2]>-1)
        printf("YES\n");
    else
    printf("NO\n");

}
int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
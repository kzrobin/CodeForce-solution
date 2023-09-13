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
void solve(){
    ll  n,x;
    scll(n);

    map<ll,ll>tkt;
    tkt[25]=0;
    tkt[50]=0;
    tkt[100]=0;

    for(ll i=0;i<n;i++){
        scll(x);
        if(x==25){
            tkt[25]++;
            continue;
            }
        else if(x==50){
            tkt[50]++;
            if(tkt[25]>0){
                tkt[25]--;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
                }
        }
        else{
            if(tkt[50]>0 && tkt[25]>0){
                tkt[50]--;
                tkt[25]--;
                continue;
                
            }
            else if(tkt[25]>2){
                tkt[25]-=3;
                continue;
            }
            else {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    solve();
return 0;
}
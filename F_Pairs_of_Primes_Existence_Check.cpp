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

void seive(vector<ll>&prime,vector<bool>&check){
    
    // vector<ll>prime;
    check[1]=true;
    check[0]=true;
    for(ll i=2;i<1001;i++){
        if(check[i]==false){
            prime.push_back(i);
            for(ll j=i*i;j<1000;j+=i)
                check[j]=true;
        }
    }
}

void solve(){
    vector<ll>prime;
    vector<bool> check(1001,0);
    seive(prime,check);

    ll t;
    scll(t);
    for(ll j=1;j<=t;j++){
        ll x; 
        scll(x);
        bool flag=true;
        for(ll i=0;x>prime[i] && i<prime.size() ;i++){
            if(check[x-prime[i]]==false){
                cout<<"Case "<<j<<": YES"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Case "<<j<<": NO"<<endl;
    }
}
int main(){
    solve();
return 0;
}
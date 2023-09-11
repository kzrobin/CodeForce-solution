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
    ll n,k;
    scll(n); scll(k);
    //  char b[n+1];
    string b;
    cin>>b;
    // scanf(" %s",b);
    // vector<ll>ex(26,0);
    ll ex[26]={};
    for(ll i=0;i<n;i++){
        ex[(int)(b[i]-'a')]++;
    }
    
    for(ll i=0;i<k;i++){
        ll flag=0; bool check =true;
        ll j;
        for(j=0;j<n/k && j<25;j++){
            if(check && ex[j]==0){
                check=false;
                flag=j;
            }
            if(ex[j])
                ex[j]--;
        }
        printf("%c",'a'+(check?j:flag));
    }
    printf("\n");
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
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
    string s;
    ll n;
    scll(n);
    vector<ll>lids(n+1,0);
    cin>>s;
    s+="00";
    for(ll i=0;i<n;i++)
        scll(lids[i]);
    ll sum=0;
    bool fst_zr=false;
    ll cnt=0;
   
    ll check=false;
    ll temp=0;

    for(ll i=0;i<n;i++){
        if(!check && s[i]=='0'){
            // cout<<"1 ";
            temp=lids[i];
        }
        else if(s[i]=='1' && !check){
            // cout<<"2 ";
            sum+=(temp+lids[i]);
            temp=min(temp,lids[i]);
            check=true;
        }
        else if(check && s[i]=='1'){
            // cout<<"3 ";
            sum+=lids[i];
            temp=min(temp,lids[i]);
        }
        else if(check && s[i]=='0'){
            // cout<<"4 ";
            check=false;
            sum-=temp;
            temp=lids[i];
            // cout<<"4 |"<<sum<<" |";
        }
        // else   cout<<"5 ";
    }
    if(check)
        sum-=temp;
    cout<<sum<<endl;

}
int main(){
    ll t;
    scll(t);
    while(t--)
        solve();
return 0;
}
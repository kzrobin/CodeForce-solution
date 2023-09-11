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

ll get_sum(string &s){
    ll sum=0;
    for(int i=0;i<s.size();i++){
        sum+=(int)(s[i]-'0');
    }
    return sum;
}

void solve(){
    ll n;
    scanf("%lld",&n);
    char ch[n+1];
    scanf("%s",ch);
    string s(ch);
    ll sum=get_sum(s);

    // cout<<s<<endl;

    if((sum%2)){
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-'0')%2){
                s.replace(i,1,"");
                break;
            }
        }
    }
    
    // cout<<s<<" "<<sum<<endl;

    if(!s.empty() && !((s[s.size()-1]-'0')%2)){
        ll cnt=0, i;
        for( i=s.size()-1;i>=0;i--){
            if(!((s[i]-'0')%2)){
                cnt++;
            }
            else break;
        }
        s.replace(i+1,cnt,"");
    }

    if(!s.empty()){
        cout<<s<<endl;
        // printf("%s\n",s);
        return;
    }
    printf("-1\n");
}

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}
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
    char a[30+1];
    char b[30+1];
    scanf(" %s %s",a,b);
    string s1(a);
    string s2(b);

    ll x1=s1.size();
    ll x2=s2.size();

    // checking last part
    ll y=-1;
    for(ll i=x1-1;i>=0;i--){
        if(s2[x2-1]==s1[i]){
            y=i;
            break;
        }
    }

    if(y!=-1)
        for(ll i=0;i<x2;i++){
            for(ll j=y+1;j<x1;j++){
                if(s2[i]==s1[j]){
                    printf("NO\n");
                    return;
                }
            }
        }
    else{
        printf("NO\n");
        return;
    }

    int arr[26]={};
    for(ll i=0;i<x2;i++){
        arr[(int)s2[i]-'A']++;
    }

    ll k=y,l=0;
    ll p=0;
    bool check=true;
    for(ll i=0;i<x2;i++){
        ll cnt=0;
        l=p;
        check=true;
        for(ll j=k;j>=l;j--){
            if(s2[i]==s1[j]){
                cnt++;
                p=j+1;
            }
            if(cnt==arr[(int)s2[i]-'A']){
                arr[(int)s2[i]-'A']--;
                check=false;
                break;
            }
        }
        if(check){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main(){
    ll t;
    scll(t);
    while(t--){
        solve();
    }
return 0;
}
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
    ll n;
    scll(n);
    char a[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++)
            scanf(" %c",&a[i][j]);
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(a[i][j]=='.'){
                if(i+2<n && j+1<n && j-1>=0){
                    if(a[i+2][j]=='.' && a[i+1][j-1]=='.' && a[i+1][j]=='.' && a[i+1][j+1]=='.'){
                        a[i][j]='#';
                        a[i+1][j-1]='#';
                        a[i+1][j]='#';
                        a[i+1][j+1]='#';
                        a[i+2][j]='#';
                    }
                    else{
                        printf("NO");
                        return;
                    }
                }
                else{
                    printf("NO");
                    return;
                }
            }
        }
    }
    printf("YES");
}


int main(){
    solve();
return 0;
}
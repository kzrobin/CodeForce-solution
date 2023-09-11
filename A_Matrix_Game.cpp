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
    ll n, m;
    scll(n);    scll(m);
    int arr[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)
            scll(arr[i][j]);
    }

    bool row[n]={};
    bool col[m]={};

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(arr[i][j]==1){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(!row[i]){
            for(ll j=0;j<m;j++){
                if(!col[j]){
                    row[i]=true;
                    col[j]=true;
                    cnt++;
                    break;
                }
            }
        }
    }
    if(cnt%2)
        printf("Ashish\n");
        else printf("Vivek\n");
}
int main(){
    ll n;
    scll(n);
    while(n--)
        solve();
return 0;
}
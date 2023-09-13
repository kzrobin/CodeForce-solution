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

int main(){

    ll n;
    scll(n);
    char arr[8][8];
    for(ll i=0;i<n;i++){
        string s="";
        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
                scanf(" %c",&arr[i][j]);
                if(arr[i][j]!='.')
                    s+=arr[i][j];
            }
        }
        cout<<s<<endl;
    }
return 0;
}
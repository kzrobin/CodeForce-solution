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

bool solve(){
    ll n,k;
    scanf("%lld%lld",&n,&k);
    char s[n+1];
    scanf("%s",s);
    string s1(s);
    if(2*k+1<=n)
    {    ll left=0,right=n-1;
        while(k &&  s1[left]==s1[right] && left<right){
            // cout<<"left "<<left<<" right "<<right<<" k "<<k<<endl; 
            left++;
            right--;
            k--;
        }
        // cout<<"k "<<k<<endl;
        if(!k)
            return true;
        return false;
    }
    return false;
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        if(solve())
            printf("YES\n");
        else printf("NO\n");
    }
return 0;
}
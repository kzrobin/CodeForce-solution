#include<iostream>
#include<string>
#include<vector>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
bool check(vector<long long>st,long long n){
    // for(int i=0;i<n;i++)
    //     cout<<st[i]<<" ";
    // cout<<endl;


    for(int i=0;i<n;i++){
        if(st[i]<i)
            return false;
        st[i+1]+=(st[i]-i);
        st[i]=i;
    }
    return true;
}
int main(){
    long long t;
    scanf("%lld",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        vector<long long>st(n+1);
        for(int i=0;i<n;i++){
            scanf("%lld",&st[i]);
        }
        long long x=n*(n-1)/2;
        if(check(st,n))
            printf("YES\n");
        else printf("NO\n");
    }
return 0;
}
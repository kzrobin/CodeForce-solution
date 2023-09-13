#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long x,n;
        scanf("%lld%lld",&n,&x);
        vector<long long>arr(n);
        long long single=0,all=0;
        for(long long i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            all+=arr[i];
            single+=ceil(arr[i]/(long double)x);
        }
        // cout<<single<<" |"<<endl;
        all=ceil(all/(long double)x);
        cout<<min(single,all)<<" "<<max(all,single)<<endl;
    }
return 0;
}
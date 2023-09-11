#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int check(vector<long>per,int n){
    vector<long>sor=per;
    sort(sor.begin(),sor.end());
    if(sor==per)
        return 0;
    long a=sor[0],b=sor[n-1];
    if(per[0]==b && per[n-1]==a)
        return 3;
    if(per[0]==a || per[n-1]==b)
        return 1;
        
    return 2;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        cin>>n;
        vector<long>per(n);
        for(int i=0;i<n;i++)
            scanf("%ld",&per[i]);
        cout<<check(per,n)<<endl;
    }
return 0;
}
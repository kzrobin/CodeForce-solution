#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    long long n,x,y;
    int t;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        long long result=n/x;
        result*=x;
        if(  result+y<=n)
            cout<<result+y<<endl;
        else cout<<result-x+y<<endl;
    }
return 0;
}

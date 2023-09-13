#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    long long n;
    cin>>n;
    // int min=1;
    // long long sum=0;
    // for(int i=1;i<=n;i++){
    //       min*=(-1);
    //     sum=sum+(min*i);
    //     // cout<<i<<" "<<min*i<<" "<<sum<<endl;
    // }
    if(n%2)
        cout<<((-1)*((n+1)/2))<<endl;
    else cout<<(n/2)<<endl;
    // cout<<sum<<endl;
return 0;
}
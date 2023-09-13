#include<iostream>
#include<string>
#include<iomanip>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    long double fraction=0;
    long double per;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>per;
        fraction+=per;
        // cout<<fraction<<endl;
    }
    cout<<fixed<<setprecision(12)<<(fraction/n)<<endl;
return 0;
}
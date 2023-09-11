#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    int police=0;
    int untreated=0;
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>0)
            police+=n;
        else if(n<0 && !police)
            untreated++;
        else
            police--;
    }
    cout<<untreated<<endl;
return 0;
}
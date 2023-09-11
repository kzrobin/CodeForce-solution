#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>2){
            if(n%2)
                cout<<(int)(n/2)<<endl;
            else cout<<(int)(n/2-1)<<endl;
        }
        else cout<<"0"<<endl;
    }
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1){
            cout<<"9"<<endl;
            continue;
        }
        else if(n==2){
            cout<<"98"<<endl;
            continue;
        }
        int x=0;
        string panel="989";
        for(int i=0;i<n-3;i++){
            panel+=char(x+'0');
            x++;
            if(x>9)
                x=0;
        }
        cout<<panel<<endl;
    }
return 0;
}
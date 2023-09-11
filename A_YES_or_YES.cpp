#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    kj;
    string y;
    int t;
    cin>>t;
    while(t--){
        cin>>y;
        if((y[0]=='y'||y[0]=='Y') && (y[1]=='e'||y[1]=='E') && (y[2]=='s'||y[2]=='S'))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string ternary;
    cin>>ternary;
    while(ternary.size()){
        if(ternary[0]=='.'){
            cout<<0;
            ternary=ternary.substr(1);
        }
        else if(ternary[0]=='-' && ternary[1]=='.'){
            cout<<1;
            ternary=ternary.substr(2);
        }
        else{
            cout<<2;
            ternary=ternary.substr(2);
        }
    }
    cout<<endl;
return 0;
}
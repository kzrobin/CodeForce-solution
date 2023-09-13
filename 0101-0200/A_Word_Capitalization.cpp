#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string capital;
    cin>>capital;
    if(capital[0]>91)
        capital[0]-=32;
    cout<<capital<<endl;
return 0;
}
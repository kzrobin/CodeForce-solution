#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    string game;
    cin>>game;
    int Anton=0,Danik=0;
    for(int i=0;i<n;i++){
        if(game[i]=='A')
            Anton++;
        else Danik++;
    }
    if(Anton>Danik)
        cout<<"Anton"<<endl;
    else if(Danik>Anton)
        cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
return 0;
}
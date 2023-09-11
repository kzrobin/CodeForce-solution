#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string magic;
    cin>>magic;
    int pos;
    while((pos=magic.find("144"))!=-1){
        magic.replace(pos,3," ");
    }
    while((pos=magic.find("14"))!=-1){
        magic.replace(pos,2," ");
    }
    while((pos=magic.find("1"))!=-1){
        magic.replace(pos,1," ");
    }
    int spaces=count(magic.begin(),magic.end(),' ');

    if(magic.size()==spaces)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

return 0;
}
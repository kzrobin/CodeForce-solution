#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int x,y,flag=0;
    cin>>x>>y;
    while(x<=y){
        x=3*x;
        y=y*2;
        flag++;
    }
    cout<<flag<<endl;
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int h,n,friends;
    int width=0;

    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>friends;
        if(h>=friends)
            width+=1;
        else width+=2;
    }
    cout<<width<<endl;
return 0;
}
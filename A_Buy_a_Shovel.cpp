#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    int price,coin;
    cin>>price>>coin;
    int flag=0,cost=0;;
    do{
        cost+=price;
        flag++;
        if(!(cost%10) || (cost%10)==coin)
            break;
    }
    while(1);
    cout<<flag<<endl;
    return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    x=n/5;
    n=n%5;
    if(n>0)
        x++;
    cout<<x<<endl;
return 0;
}
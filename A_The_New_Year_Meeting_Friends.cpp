#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(max(a,max(b,c))-min(a,min(b,c)))<<endl;
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<(int)abs(a-b)/2<<endl;
return 0;
}
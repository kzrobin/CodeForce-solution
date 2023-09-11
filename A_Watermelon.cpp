#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n!=2 && !(n%2))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

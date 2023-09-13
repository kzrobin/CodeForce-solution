#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    int a,b;
    int maximum=0;
    int present=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        present=present-a+b;
        maximum=max(present,maximum);
    }
cout<<maximum<<endl;
return 0;
}
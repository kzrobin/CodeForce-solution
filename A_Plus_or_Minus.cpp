#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int a,b,c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){    
        cin>>a>>b>>c;
        if((a-b)==c)
            cout<<"-"<<endl;
        else cout<<"+"<<endl;
        }
return 0;
}
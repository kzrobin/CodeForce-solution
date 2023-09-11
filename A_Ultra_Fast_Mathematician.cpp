#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string a,b,c="";
    cin>>a>>b;
    int len=a.size();
    for(int i=0;i<len;i++){
        if((a[i]=='1' && b[i]=='1')||(a[i]=='0' && b[i]=='0'))
            c=c+"0";
        else c=c+"1";
    }
    cout<<c<<endl;
return 0;
}
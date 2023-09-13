#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    string odd="I hate";
    string even="I love";
    string con="that";
    string felling;
    for(int i=1;i<=n;i++){
        if(i%2)
            cout<<odd<<" ";
        else cout<<even<<" ";
        if(i!=n)
        cout<<"that ";
    }
    cout<<"it"<<endl;
return 0;
}
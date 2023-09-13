#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int borrow=k*(w*(w+1))/2-n;
    if(borrow>0)
        cout<<borrow<<endl;
    else cout<<"0"<<endl;
return 0;
}
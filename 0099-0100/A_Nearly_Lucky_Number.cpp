#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    long long n;
    cin>>n;
    int flag=0;
    while(n){
        if((n%10)==4 || (n%10)==7)
            flag++;
        n/=10;
    }
    if(flag==4 || flag==7)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}
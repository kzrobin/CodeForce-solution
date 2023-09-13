#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    long long n;
    cin>>n;
    int flag=0;
    int arr[]={100,20,10,5,1};
    for(int i=0;i<5;i++){
        flag+=n/arr[i];
        n=n%arr[i];
    }
    cout<<flag<<endl;
return 0;
}
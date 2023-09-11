#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int divisor(int a,int b){
    if(!(a%b)){
        return 0;
    }
    else {
        int x=a%b;
        return (b-x);
    }
}
int main(){
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        int x= divisor(a,b);
        cout<<x<<endl;
    }
return 0;
}
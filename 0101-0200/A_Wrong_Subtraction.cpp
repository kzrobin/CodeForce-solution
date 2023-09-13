#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    while(k--){
        if(!(n%10))
            n=n/10;
        else n--;
        // cout<<n<<endl;
    }
    cout<<n<<endl;
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    long long t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a<b)
            swap(a,b);
            int x=(a-b)/10;
            if((a-b)%10)
                ++x;
            cout<<x<<endl;
    }
return 0;
}
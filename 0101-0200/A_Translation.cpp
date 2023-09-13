#include<iostream>
#include<string>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string Berland,Birland;
    cin>>Berland>>Birland;
    reverse(Berland.begin(),Berland.end());
    // cout<<Berland<<endl;
    if(Berland==Birland)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}
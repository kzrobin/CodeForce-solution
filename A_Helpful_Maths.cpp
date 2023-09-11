#include<iostream>
#include<string>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    string math;
    cin>>math;
    string x="";
    for(int i=0;i<math.size();i+=2)
        x=x+math[i];
    // cout<<x<<endl;
    sort(x.begin(),x.end());
    // cout<<x<<endl;
    for(int i=0;i<x.size();i++){ 
        cout<<x[i];
        if(i!=x.size()-1)
            cout<<"+";
            }
        cout<<endl;
return 0;
}
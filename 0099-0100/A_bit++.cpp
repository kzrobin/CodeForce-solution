#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int x=0;
    int n;
    cin>>n;
    string bit[n];
    for(int i=0;i<n;i++){
        cin>>bit[i];
        if(bit[i]=="X++" || bit[i]=="++X")
            x++;
        else x--;
    }
    cout<<x<<endl;
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    for(int i=0;i<n;i++){
        if(words[i].size()>10)
            cout<<words[i][0]<<(words[i].size()-2)<<words[i][words[i].size()-1]<<endl;
        else cout<<words[i]<<endl;
    }
return 0;
}
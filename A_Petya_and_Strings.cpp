#include<iostream>
#include<string>
#include<cctype>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string first,second;
    cin>>first>>second;
    for(int i=0;i<first.size();i++)
        first[i]=tolower(first[i]);
    for(int i=0;i<second.size();i++)
        second[i]=tolower(second[i]);
    int x=first.compare(second);
    cout<<x<<endl;
return 0;
}
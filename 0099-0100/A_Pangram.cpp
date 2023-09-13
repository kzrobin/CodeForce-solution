#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool check_panagram(string panagram,int n){
    for(int i=0;i<n;i++)
        panagram[i]=tolower(panagram[i]);

    bool arr[26]={};
    for(int i=0;i<panagram.size();i++)
        arr[(int)(panagram[i]-97)]=true;

    for(int i=0;i<26;i++)
        if(!arr[i])
            return false;
            
    return true;
}
int main(){
    int n;
    cin>>n;
    string panagram;
    cin>>panagram;

    if(check_panagram(panagram,n))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string gender;
    cin>>gender;
    int hash[26]={};
    for(int i=0;i<gender.size();i++){
        hash[(int)gender[i]-97]++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(hash[i])
            count++;
    }
    if(count%2)
        cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
return 0;
}
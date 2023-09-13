#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr[26]={};
    for(int i=0;i<s.size();i++){
        arr[(int)s[i]-'a']++;
    }
    
    for(int i=0;i<26;i++)
        if(arr[i])
            cout<<char(i+'a')<<" : "<<arr[i]<<endl;
return 0;
}
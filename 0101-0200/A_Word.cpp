#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string word;
    cin>>word;
    int up=0,low=0;
    for(int i=0;i<word.size();i++){
        if(word[i]>='a')
            low++;
        else up++;
    }
    // cout<<low<<" "<<up<<endl;
    for(int i=0;i<word.size();i++){
        if(low>=up)
            word[i]=tolower(word[i]);
        else word[i]=toupper(word[i]);
    }
    cout<<word<<endl;
return 0;
}
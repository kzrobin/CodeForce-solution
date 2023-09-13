#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string letter;
    getline(cin,letter);

    // cout<<letter<<endl;
    
    vector<char>distinct;
    for(int i=0;i<letter.size();i++){
        if(letter[i]>='a' && letter[i]<='z')
            distinct.push_back(letter[i]);
    }

    // for(int i=0;i<distinct.size();i++)
    //     cout<<distinct[i]<<" ";
    // cout<<endl;

    sort(distinct.begin(),distinct.end());

    if(!distinct.empty())
        for(int i=0;i<distinct.size()-1;i++){
            if(distinct[i]==distinct[i+1]){
                distinct.erase(distinct.begin()+i);
                i--;
            }
        }
        cout<<distinct.size()<<endl;
return 0;
}
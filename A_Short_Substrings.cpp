#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    string prin,sub;
    while(t--){
        prin="";
        cin>>sub;
        char ch=sub[(sub.size()-1)];
        while(sub.size()!=0){
            prin=prin+sub[0];
            sub=sub.substr(2);
        }
        prin+=ch;
        cout<<prin<<endl;
    }
return 0;
}
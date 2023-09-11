#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    string school;
    int n;
    int t;
    cin>>n>>t>>school;
    int b=0,g=0;
    string regen=school;
    while(t--){
       for(int i=0;i<n-1;i++){
        if(school[i]!=school[i+1] && school[i+1]=='G'){
            swap(regen[i],regen[i+1]);
            }
        }
        school=regen;
    }
    cout<<regen<<endl;
return 0;
}
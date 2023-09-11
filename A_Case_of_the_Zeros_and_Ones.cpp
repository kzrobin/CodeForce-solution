#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    string andrew;
    cin>>andrew;
    // for(int i=0;i<andrew.size()-1;i++){
    //     if((andrew[i]=='1' && andrew[i+1]=='0') ||(andrew[i]=='0' && andrew[i+1]=='1')){
    //         andrew.replace(i,2,"");
    //         i=i-2;
    //     }
    // }
    // int pos;
    // while(andrew.find("01")!=-1 || andrew.find("10")!=-1){
    //     if((pos=andrew.find("01"))!=-1){
    //         andrew.replace(pos,2,"");
    //     }
    //      if((pos=andrew.find("10"))!=-1){
    //         andrew.replace(pos,2,"");
    //     }
    // }
    int zero=count(andrew.begin(),andrew.end(),'0');
    int ones=count(andrew.begin(),andrew.end(),'1');
    cout<<n-(2*min(ones,zero))<<endl;
return 0;
}
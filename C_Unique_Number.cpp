#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

// string check(vector<string>unique,int n){
//     if(n>45)
//         return "-1";
//     else if(n<unique.size())
//         return unique[n];
//     else{
//         for(int i=unique.size();i<=n;i++){
//             string x=unique[unique.size()-1];
//             if(x[0]==x[1]-1){
//                 string next="1";
//                 next=next+x;
//                 unique.push_back(next);
//             }
//             else {
//                 x[0]=x[0]+1;
//                 unique.push_back(x);
//             }
//         }
//     }
//     return unique[unique.size()-1];
// }
// int main(){
   
//     int t;
//     cin>>t;
//     int n;
//     vector<string> unique;
//     string x="";
//     for(int i=0;i<10;i++){
//         unique.push_back((x+char(i+48)));
//     }
//     unique.push_back("19");
//     while(t--){
//         cin>>n;
//         cout<<check(unique,n)<<endl;
//     }
// return 0;
// }




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>45)
            cout<<"-1"<<endl;
            else{
            int x=9;
            string unique="";
            while(n){
                if(n<x){
                     unique+=to_string(n);
                     n=0;
                }
                else{
                    n-=x;
                    unique+=to_string(x);
                    x--;
                }
            }
            sort(unique.begin(),unique.end());
            cout<<unique<<endl;
        }
    }
    return 0;
}
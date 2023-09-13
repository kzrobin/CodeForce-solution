// #include<iostream>
// #include<string>
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
//         if(i%2){
//             for(int j=1;j<=m;j++)
//                 cout<<"#";
//             cout<<endl;
//             }
//         else {
//             if(i%4){
//                 for(int j=1;j<=m;j++){
//                     if(j==m)
//                         cout<<"#";
//                     else cout<<".";
//                 }
//                 cout<<endl;
//             }
//             else{
//                 for(int j=1;j<=m;j++){
//                     if(j==1)
//                         cout<<"#";
//                     else cout<<".";
//                 }
//                 cout<<endl;
//             }
//         }
//     }

// return 0;
// }





#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2)
                cout<<"#";
            else if( (i%4) && j!=m){
                cout<<".";
                }
            else if(i%4)
                cout<<"#";
            else if(j==1)
                cout<<"#";
            else cout<<"."; 
        }
        cout<<endl;
    }
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    int opinion;

    for(int i=0;i<n;i++){
        cin>>opinion;
        if(opinion==1){
            cout<<"HARD"<<endl;
            exit(0);
        }
    }
    cout<<"EASY"<<endl;
return 0;
}
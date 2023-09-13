#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,bags;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>bags;
        int mihai=0,bonica=0,flag;
        for(int i=0;i<bags;i++){
            cin>>flag;
            if(flag%2)
                bonica+=flag;
            else mihai+=flag;
        }
        if(mihai>bonica)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
return 0;
}
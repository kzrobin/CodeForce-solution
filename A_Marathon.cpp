#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>marathon(4);
        for(int i=0;i<4;i++)
            cin>>marathon[i];
        int taimur=marathon[0];
        sort(marathon.rbegin(), marathon.rend());
        for(int i=0;i<4;i++){
            if(marathon[i]==taimur){
                cout<<i<<endl;
                break;
            }
        }
    }
return 0;
}
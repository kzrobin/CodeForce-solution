#include<iostream>
#include<vector>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,k;
    cin>>n;
    vector<int>gift(n);
    for(int i=0;i<n;i++){
        cin>>k;
        gift[k-1]=(i+1);   
    }
    for(int i=0;i<n;i++)
        cout<<gift[i]<<" ";
    cout<<endl;
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    string first,second;
    cin>>n;
    cin>>first;
    int group=1;
    for(int i=0;i<n-1;i++){
        cin>>second;
        if(first!=second)
            group++;
        first=second;
    }
    cout<<group<<endl;
    return 0;
}
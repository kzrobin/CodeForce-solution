#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,flag=0;
    cin>>n;
    string stones;
    cin>>stones;
    for(int i=0;i<n-1;i++)
        if(stones[i]==stones[i+1])
            flag++;
    cout<<flag<<endl;
return 0;
}

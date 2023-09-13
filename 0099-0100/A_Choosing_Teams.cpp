#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int flag=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x+t<=5)
            flag++;
    }
    cout<<flag/3<<endl;
return 0;
}
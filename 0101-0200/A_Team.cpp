#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    int flag=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y+z)>1)
            flag++;
    }
    cout<<flag<<endl;
return 0;
}
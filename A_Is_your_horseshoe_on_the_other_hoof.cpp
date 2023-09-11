#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    vector<int>shoes(4);
    for(int i=0;i<4;i++){
        cin>>shoes[i];
    }
    int flag=0;
    sort(shoes.begin(),shoes.end());
    for(int i=0;i<3;i++)
        if(shoes[i]==shoes[i+1])
            flag++;
    cout<<flag<<endl;
return 0;
}
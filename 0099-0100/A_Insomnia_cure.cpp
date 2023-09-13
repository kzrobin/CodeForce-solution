#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main(){
      int harm[5+1];
      for(int i=1;i<=5;i++)
        cin>>harm[i];
    // cout<<"INPUT"<<endl<<endl;
    // for(int i=1;i<=5;i++)
    //     cout<<harm[i]<<" ";
    // cout<<endl<<endl;
 
    bool arr[harm[5]+1]={};

    for(int i=1;i<=4;i++){
        for(int j=1;j<=harm[5];j++){
            if(!(j%harm[i])){
                arr[j]=true;
                }
        }
    }
    int flag=0;
    for(int i=1;i<=harm[5];i++){
        if(arr[i])
            flag++;
    }
    cout<<flag<<endl;
return 0;
}
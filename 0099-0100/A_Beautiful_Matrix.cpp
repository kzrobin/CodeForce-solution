#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int matrix[5][5];
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                x=i;
                y=j;
            }    
       }
    }
    int moves=abs(x-2)+abs(y-2);
    cout<<moves<<endl;
return 0;
}
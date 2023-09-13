#include<iostream>
#include<string>
#include<vector>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b;
    vector<int>home(n);
    vector<int>guest(n);

    for(int i=0;i<n;i++){
        cin>>a>>b;
        home[i]=a;
        guest[i]=b;
    }
    // cout<<"Home "<<endl;
    // for(int i=0;i<n;i++)
    //     cout<<home[i]<<" ";
    // cout<<endl;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            else if(home[i]==guest[j]){
                // cout<<"Home "<<home[i]<<" "<<guest[i]<<" "<<"guest ";
                // cout<<home[j]<<" "<<guest[j]<<endl;
                flag++;
                }
        }
    }
    cout<<flag<<endl;

return 0;
}
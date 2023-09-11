#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int sum=0;
    int tim;
    for(int i=0;i<n;i++){
        cin>>tim;
        sum+=tim;
        }
    if(sum+(n-1)*10>d)
        cout<<-1<<endl;
    else cout<<(int)((d-sum)/5)<<endl;
return 0;
}
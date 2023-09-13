#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int time=4*60-k;
    int solved=0;
    while(((solved+1)*5)<=time && solved<n){
        solved++;
        time-=solved*5;
    }
    cout<<solved<<endl;
return 0;
}

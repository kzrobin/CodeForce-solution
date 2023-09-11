#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void round(int n){
    int power=0;
    int reminder;
    vector<int>summand;
    while(n){
        reminder=n%10;
        if(reminder!=0)
            summand.push_back((reminder*pow(10,power)));
        power++;
        n/=10;
    }
    cout<<summand.size()<<endl;
    for(int i=0;i<summand.size();i++)
        cout<<summand[i]<<" ";
    cout<<endl;
}
int main(){
    IOS
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        round(n);
    }
return 0;
}
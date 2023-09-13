#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int i,flag,n,t;
    cin>>t;
    while(t--){
        i=0; flag=0;
        cin>>n;
        while(flag<n){
            i++;
            if(!(i%3) || (i%10)==3)
                continue;
            flag++;
        }
        cout<<i<<endl;
    }
return 0;
}
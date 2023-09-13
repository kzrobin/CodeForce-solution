#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        if(a[0]+a[1]==a[2])
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
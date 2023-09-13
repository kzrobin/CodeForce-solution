#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool check(vector<int>x){
    sort(x.rbegin(),x.rend());
    for(int i=0;i<x.size()-1;i++){
        if((x[i]-x[i+1])>1)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
         if(check(arr))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
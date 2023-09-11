#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    cout<<(int)'a'<<endl;
    int n;
    cin>>n;
    // map<int,int>ox;
    vector<long long>city(n);
    for(int i=0;i<n;i++){
        cin>>city[i];
    }
    // cout<<city[0]<<" "<<city[1]<<" "<<city[1]-city[0]<<endl;

    for(int i=0;i<n;i++){
        if(i==0){
            cout<<abs(city[i+1]-city[i])<<" "<<(city[n-1]-city[i])<<endl;
            continue;
        }
        else if(i==n-1){
            cout<<abs(city[i]-city[i-1])<<" "<<city[n-1]-city[0]<<endl;
        }
        else cout<<min((city[i]-city[i-1]),(city[i+1]-city[i]))<<" "<<max((city[n-1]-city[i]),(city[i]-city[0]))<<endl;
    }
return 0;
}
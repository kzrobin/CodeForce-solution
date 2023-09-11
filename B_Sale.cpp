#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>tv(n);
    for(int i=0;i<n;i++){
        cin>>tv[i];
    }
    sort(tv.begin(),tv.end());
    int earn=0;
    for(int i=0;i<m;i++){
        if(tv[i]>0)
            break;
        else earn+=tv[i];
    }
    cout<<(-1)*earn<<endl;
return 0;
}
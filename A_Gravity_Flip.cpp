#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>box(n);
    for(int i=0;i<n;i++)
        cin>>box[i];
    sort(box.begin(),box.end());
    for(int i=0;i<n;i++)
        cout<<box[i]<<" ";
    cout<<endl;
return 0;
}
#include<iostream>
#include<string>
#include<vector>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    int low=0,high=0;
    vector<int>soldier(n);
    for(int i=0;i<n;i++){
        cin>>soldier[i];
        if(soldier[i]<=soldier[low])
            low=i;
        if(soldier[i]>soldier[high])
            high=i;
    }
    // cout<<"high "<<high<<" low "<<low<<endl;
    if(high<low)
        cout<<((n-1-low)+high)<<endl;
    else cout<<((n-1-low)+high-1)<<endl;

return 0;
}
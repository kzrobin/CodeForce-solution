#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr(n);
        int low=0,minl=100,l=0;
        int high=0,maxh=1,h=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            minl=min(minl,arr[i]);
            maxh=max(maxh,arr[i]);
        }
        // cout<<"min "<<minl<<" max "<<maxh<<endl;
        for(int i=0;i<n;i++){
            if(arr[i]==minl){
                l=i;
                low++;
            }
            else{
                h=i;
                high++;
            }
        }
        if(low==1)
            cout<<l+1<<endl;
        else cout<<h+1<<endl;
    }
}
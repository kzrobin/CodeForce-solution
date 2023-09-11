#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        if(arr[i-1]>=arr[k-1] && arr[i-1]!=0){
            // cout<<arr[i-1];
            flag++;
            }
    }
    cout<<flag<<endl;
return 0;
}
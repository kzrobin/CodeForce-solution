#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        if((n%4))
            cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(int i=2;i<=n;i+=2){
                    cout<<i<<" ";
                }
                for(int i=1;i<n;i+=2){
                    if(i==n-1)
                        cout<<i+n/2<<" ";
                    else cout<<i<<" ";
                }
                 cout<<endl;
            }   
    }
return 0;
}
//2 4 6 8 10 12 14 16 
//1 3 5 7 9 11 13 15

//((n+1)n)/2 -n2
//(n2+n)/2-n2/2
//
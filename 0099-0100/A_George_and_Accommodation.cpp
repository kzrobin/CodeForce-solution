#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    int p,q;
    int avil=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if((q-p)>1)
            avil++;
    }
    cout<<avil<<endl;
return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,t;
    cin>>t;
    while(t--){
        int odd=0,even=0;
        int mis=0;
        cin>>n;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(i%2 != x%2){
                mis++;
                if(x%2)
                    odd++;
                else even++;
            }
        } 
        if(!(mis%2) && odd==even)
            cout<<mis/2<<endl;
        else cout<<"-1"<<endl;                                                                               
    }
return 0;
}

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        int n,m;
        cin>>x>>n>>m;
        while(x>20 && n){
            // cout<<"x "<<x<< " n "<<n<<endl;
            x=(x/2 )+10;
            n--;
            
        }
        while(x>=0 && m){
            x-=10;
            m--;
        }
        if(x<=0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
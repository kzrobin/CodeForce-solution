#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    int amaze=0;
    int points;
    int best=0,worse=0;
    cin>>n;
    cin>>points;
    worse=best=points;
    for(int i=1;i<n;i++){
        cin>>points;
        if(points<worse){
            amaze++;
            worse=points;
        }
        else if(points>best){
            amaze++;
            best=points;
        }
    }
    cout<<amaze<<endl;

return 0;
}
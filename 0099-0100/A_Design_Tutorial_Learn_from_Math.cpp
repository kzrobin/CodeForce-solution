#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
bool composite(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(!(n%i))
            return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int a,b;
    if(n%2){
        a=n/2;
        b=n/2+1;
    }
    else a=b=n/2;
    while(1){
        if(composite(a) && composite(b)){
            cout<<a<<" "<<b<<endl;
            exit(0);
        }
        a++;
        b--;
    }
return 0;
}
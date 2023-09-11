#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b;
    int m=0,c=0;
    while(n--){                                                                                                                                                   
        cin>>a>>b;
        if(a>b)
            m++;
        else if(b>a)
            c++;
    }
    if(m>c)
        cout<<"Mishka"<<endl;
    else if(c>m)
        cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
return 0;
}
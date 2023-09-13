#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int year;
    cin>>year;
    int a,b,c,d;
    int next;
    while(1){
        year++;
        next=year;
        a=next%10; next/=10;
        b=next%10; next/=10;
        c=next%10; next/=10;
        d=next;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<year<<endl;
            break;
        }
    }
return 0;
}
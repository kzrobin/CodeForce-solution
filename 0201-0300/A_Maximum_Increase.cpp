#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){

   long long int n;
   cin>>n;
   long long int a[n];
   for(long long int i=0;i<n;i++){
        cin>>a[i];
   } 

long long int len=1,ml=1,ans=0;
// 1 7 2 11 15
 for(long long int i=0;i<n-1;i++){
    if(a[i+1]>a[i]){
        len++;
    }
    else{
        ans = max(len,ans);
        len=1;
    }
 }
 ans = max(len,ml);
 cout<<ans;
return 0;
}
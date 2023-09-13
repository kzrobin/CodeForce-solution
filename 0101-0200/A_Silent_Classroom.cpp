#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
void com(vector<ll>&fact){
    fact[2]=1;
    for (ll i=3;i<=50;i++){
         fact[i]=((fact[i-1]/(long double)(i-2))*i);
    }
}
 
int main(){
    vector<ll>fact(51,0);
    com(fact);
    int n;
    cin>>n;
    vector<int>arr(26,0);
    
    string s;
    for(int i=0;i<n;i++){
    cin>>s;
    arr[(int)(s[0]-'a')]++;
    }
    // for(auto i: arr)
    //     cout<<i<<" ";
    // cout<<endl;


    long long x=0;
    for(int i=0;i<26;i++){
        if(arr[i]>2){
        ll n=ceil(arr[i]/2);
        x+=(fact[n]);
        n=arr[i]-n;
        if(n>1)
            x+=(fact[n]);
 
           }
      }
      cout<<x<<endl;
      return 0;
}
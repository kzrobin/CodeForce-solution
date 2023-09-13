#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    string x,y,z="";
    cin>>x;
    cin>>y;
    for(ll i=0;i<x.size();i++){
        if(x[i]>=y[i]) continue;
        printf("-1");
        exit(0);
    }
    cout<<y<<endl;
return 0;
}
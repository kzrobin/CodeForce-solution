#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>citizen(n);
    int maximun=0;;
    for(int i=0;i<n;i++){
    cin>>citizen[i];
    maximun=max(maximun,citizen[i]);
    }
    int spend=0;
    for(int i=0;i<n;i++){
        spend+=(maximun-citizen[i]);
    }
    cout<<spend<<endl;
return 0;
}
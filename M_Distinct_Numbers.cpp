#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    set<int> dis;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        dis.emplace(x);
    }
    cout<<dis.size()<<endl;
return 0;
}
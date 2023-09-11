#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>coin(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>coin[i];
        sum+=coin[i];
    }
    sort(coin.rbegin(),coin.rend());
    int flag=0;
    int thief=0;
    while(thief<=sum){
        thief+=coin[flag];
        sum-=coin[flag];
        flag++;
    }
    cout<<flag<<endl;
return 0;
}
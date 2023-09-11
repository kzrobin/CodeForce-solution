#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    vector <int> sum;
    int x;
    for(int i=0;i<4;i++){
        cin>>x;
        sum.push_back(x);
    }
    sort(sum.begin(),sum.end());
    cout<<sum[3]-sum[0]<<" "<<sum[3]-sum[1]<<" "<<sum[3]-sum[2]<<endl;
return 0;
}
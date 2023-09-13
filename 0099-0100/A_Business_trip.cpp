#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int grow(vector<int>mon,int k){
    int i=0,water=0;
    // cout<<"K="<<k<<endl;
    // for(int i=0;i<12;i++)
    //     cout<<mon[i]<<" ";
    // cout<<endl;

    for(i=0;i<12 && water<k;i++){
        water+=mon[i];
    }

    if(water>=k)
        return i;
    else return -1;
}

int main(){
    int k;
    cin>>k;
    vector<int>mon(12);
    for(int i=0;i<12;i++)
    
        cin>>mon[i];
    sort(mon.rbegin(),mon.rend());

    cout<<grow(mon,k)<<endl;
return 0;
}
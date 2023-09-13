#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int check(){
    int n;
    cin>>n;
    int boss=0;
    vector<int>pirn(n);
    for(int i=0;i<n;i++){
        cin>>pirn[i];
        boss=max(boss,pirn[i]);
    }
    if(count(pirn.begin(),pirn.end(),boss)==pirn.size())
        return -1;
    else{
        for(int i=0;i<n-1;i++){
            if(pirn[i]==boss && pirn[i]>pirn[i+1])
                return i+1;
            if(i>0 && pirn[i]==boss && pirn[i-1]<boss)
                return i+1;
        }
    }
    return n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    cout<<check()<<endl;
    }
return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> puzzle(m);
    for(int i=0;i<m;i++)
        cin>>puzzle[i];
    sort(puzzle.begin(),puzzle.end());
    // for(int i=0;i<m;i++)
    //     cout<<puzzle[i]<<" ";
    // cout<<endl;
    int flag=1001;
    for(int i=0,j=n-1;j<m;j++,i++){
        flag=min(flag,(puzzle[j]-puzzle[i]));
    }
    cout<<flag<<endl;
return 0;
}
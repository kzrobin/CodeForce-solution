#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool check(string task){
    vector<bool> hold(26,false);
    for(int i=0;i<task.size();i++){
        if(hold[(int)(task[i]-65)]==false)
            hold[(int)(task[i]-65)]=true;
        else return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string task;
        int n;
        cin>>n>>task;
        for(int i=0;i<task.size();i++){
            if(task[i]==task[i+1]){
                task.erase(task.begin()+i);
                i--;
            }
        }
        if(check(task))
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}
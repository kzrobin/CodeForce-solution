#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int level;
    vector<int>game;
    cin>>level;
    int n1;
    int n2;
    cin>>n1;
    for(int i=0;i<n1;i++){
        int k;
        cin>>k;
        game.push_back(k);
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        int k;
        cin>>k;
        game.push_back(k);
    }


    sort(game.begin(),game.end());


    // cout<<"sorted"<<endl;
    // for(int i=0;i<game.size();i++)
    //         cout<<game[i]<<" ";
    //     cout<<endl<<endl;
    if(game.size()!=0)
        for(int i=0;i<(game.size()-1);i++){
            if(game[i]==game[i+1]){
                game.erase(game.begin()+i);
                i--;
            }
        }
    // cout<<"size "<<game.size()<<endl;
    // for(int i=0;i<game.size();i++)
    //         cout<<game[i]<<" ";

    if(level==game.size())
        cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
return 0;
}
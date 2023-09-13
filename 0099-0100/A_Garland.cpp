#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    string x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        map<char,int>light;
        for(int i=0;i<4;i++)
            light[x[i]]++;
        if(light.size()==4||light.size()==3)
            cout<<4<<endl;
        else if(light.size()==1)
            cout<<"-1"<<endl;
        else{
            auto it=light.lower_bound('0');

            if((*it).second==next(it)->second)
                cout<<"4"<<endl;
            else cout<<"6"<<endl;
        }
    }
return 0;
}
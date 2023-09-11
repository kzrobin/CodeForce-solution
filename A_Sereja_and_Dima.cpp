#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int i=1,ser=0,dim=0;
    
    while(!vec.empty()){
        if(i%2){
            if(*vec.begin()>=*(vec.end()-1))
                {
                    ser+=vec[0];
                    vec.erase(vec.begin());
                        i++;  
                }
                else{
                    ser+=*(vec.end()-1);
                    vec.pop_back();
                    i++;
                }
        }
        else {
            if(*vec.begin()>=*(vec.end()-1))
                {
                    dim+=vec[0];
                    vec.erase(vec.begin());
                        i++;
                }
                else{
                    dim+=*(vec.end()-1);
                    vec.pop_back();
                    i++;
                }
        }
    }
    cout<<ser<<" "<<dim<<endl;
return 0;
}
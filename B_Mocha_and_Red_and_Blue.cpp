#include<iostream>
#include<string>
#include<vector>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    string blocks(s);
    if(blocks.find("B")==-1 && blocks.find("R")==-1){
        for(int i=0;i<n;i++){
            if(i%2)
                blocks[i]='B';
            else blocks[i]='R';

        }
    }
    else{
        while(blocks.find('?')!=-1){
            int pos;
            while((pos=blocks.find("?B"))!=-1){
                blocks[pos]='R';
            }
            while((pos=blocks.find("?R"))!=-1){
                blocks[pos]='B';
            }
            while((pos=blocks.find("R?"))!=-1){
                blocks[pos+1]='B';
            }
            while((pos=blocks.find("B?"))!=-1){
                blocks[pos+1]='R';
            }
        }
        
    }
    cout<<blocks<<endl;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    string fin;
    string flag="0";
    int n,k;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>k;
        cin>>fin;
        for(int i=0;i<fin.size();i++){
            if(fin[i] !='0' && fin[i]!='1')  {
                char ch=fin[i];
                if(i==0)
                    flag="1";
                else if(fin[i-1]=='0')
                    flag="1";
                else flag="0";
                while(fin.find(ch,i)!=string::npos){
                    int x=fin.find(ch,i);
                    fin.replace(x,1,flag);

                }
            }        
        }
        int cou=0;
        for(int i=0;i<k-1;i++){
            if(fin[i]!=fin[i+1])
                cou++;
            else break;
        }
        if(cou==k-1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
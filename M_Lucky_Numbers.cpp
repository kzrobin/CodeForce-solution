#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    int x=-1;
    
    for( i=a;i<=b;i++)
    {
        string s;
        s=to_string(i);
        int flag=1;
        for(int j=0;j<s.size();j++)
        {   
            if(s[j]!='4' && s[j]!='7')
            {
                flag=0;
                break;
            }
        }
        if(flag==1){
            x=0;
            cout<<s<<" ";
            }
    }
    if(x)
        cout<<x<<endl;
    cout<<endl;
    return 0;
}
#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool check(string a,string b, string c){
    string z=a+b;
    int arr1[26]={};
    for(int i=0;i<z.length();i++){
        arr1[(int)(z[i]-'A')]++;
    }
    int arr2[26]={};
    for(int i=0;i<c.length();i++){
        arr2[(int)(c[i]-'A')]++;
    }
    for(int i=0;i<26;i++)
        if(arr1[i]!=arr2[i])
            return false;
    return true;
}
int main(){
    string a,b,c;
    cin>>a>>b>>c;

    // cout<<" a "<<a.length()<<" "<<" b "<<b.length()<<" c "<<c.length()<<endl;

    if(check(a,b,c) && a.length()+b.length()==c.length())
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}
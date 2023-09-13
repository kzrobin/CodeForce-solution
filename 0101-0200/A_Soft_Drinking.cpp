#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c;
    cin>>d>>p>>nl>>np;
    int each_drinks=((k*l)/n)/nl;
    int each_limes=(c*d)/n;
    int each_salt=(p/n)/np;
    int for_each=min(each_drinks,min(each_limes,each_salt));
    // cout<<with_together<<endl;
    cout<<for_each<<endl;
return 0;
}


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    ull n;
    scanf("%llu",&n);
    ull cnt=0;
    while(n){
        cnt++;
        string s=to_string(n);
        auto x= max_element(s.begin(),s.end());
        s=*(x);
        n-=stoll(s);
    }
    cout<<cnt<<endl;
return 0;
}
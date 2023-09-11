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
using namespace std;

int main(){
    ll n;
    scll(n);
    vector<ll>group(n);
    ll w=0,x=0, y=0, z=0;
    for(auto &i : group){
        scll(i);
        if(i==1)
            w++;
        else if(i==2)
            x++;
        else if(i==3)
            y++;
        else z++;
    }

    ll cnt=z;

    cnt+=(y);
    w-=y;

    if(w>0)
        w=ceil(w/2.0);
    else w=0;

    x+=w;
    cnt+=ceil(x/2.0);
    cout<<cnt<<endl;



return 0;
}
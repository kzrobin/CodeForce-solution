#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<bitset>
#define scll(n) scanf("%lld",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;

int main(){
    bitset<2>arr;
    arr[1]=1;
    arr[0]=0;
    cout<<arr<<endl;
    cout<<(~arr)<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.any()<<endl;

    cout<<sizeof(arr.to_ullong())<<endl;
    cout<<arr.none()<<endl;
    cout<<sizeof(ll)<<endl;
return 0;
}
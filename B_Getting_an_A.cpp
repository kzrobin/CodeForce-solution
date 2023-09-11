#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define scll(n) scanf("%lld",&n)
#define ld long double
#define scld(n) scanf("%llf",&n)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ll n;
    scll(n);
    vector<ll>grade(n);
    ld sum=0;
    for(ll i=0;i<n;i++){
        scll(grade[i]);
        sum+=grade[i];
    }
    sort(grade.begin(),grade.end());
    ll cnt=0;
    while((sum/n)<4.5){
        sum-=grade[cnt];
        sum+=5;
        cnt++;
    }
    printf("%lld\n",cnt);
return 0;
}
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

ll fst_binary(const vector<pair<ll,ll>> &arr, int item, const int n){
    ll lft=0, rht=n-1, mid;
    ll ans;
    while(lft<=rht){
        mid=(lft+rht)/2;
        if(arr[mid].first==item){
            ans=mid;
            rht=mid-1;
        }
        else if(arr[mid].first>item)
            lft=mid+1;
        else rht=mid-1;
    }
    return ans;
}
ll lst_binary(const vector<pair<ll,ll>> &arr, int item, const int n){
    ll lft=0, rht=n-1, mid;
    ll ans;
    while(lft<=rht){
        mid=(lft+rht)/2;
        if(arr[mid].first==item){
            ans=mid;
            lft=mid+1;
        }
        else if(arr[mid].first>item)
            lft=mid+1;
        else  rht=mid-1;
    }
    return ans;
}

void solves(){
    ll n, m, h;
    scll(n); scll(m); scll(h);
    vector<pair<ll,ll>>place(n);
    vector<ll>time(m);
    for(ll i=0;i<n;i++){
        for(auto &j : time)
            scll(j);
        sort(time.begin(),time.end());
        for(ll j=1;j<m;j++)
            time[j]+=time[j-1];
        ll penalty=0, cnt=0;

        for(auto j : time){
            if(j>h)
                break;
            penalty+=j;
            cnt++;
        }
        place[i]={cnt,penalty};
    }
    pair<ll,ll>rud=place[0];
    sort(place.rbegin(),place.rend());

    ll a=fst_binary(place,rud.first,n);
    ll b=lst_binary(place,rud.first,n);
    reverse(place.begin()+a,place.begin()+b+1);
    for(ll i=0;i<place.size();i++){
        if(place[i]==rud){
            printf("%lld\n",i+1);
            return;
        }
    }
}
int main(){
    ll t;
    scll(t);
    while(t--)
        solves();
return 0;
}
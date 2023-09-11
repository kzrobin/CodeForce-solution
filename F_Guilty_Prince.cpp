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
char arr[20][20];
bool visit[20][20];


ll sec_BFS_2D(ll n, ll m, ll a,ll b){
    ll cnt=1;
    queue<pair<ll,ll>>q;
    q.push({a,b});
    visit[a][b]=1;
    while(!q.empty()){
        ll x=q.front().first;
        ll y=q.front().second;
        q.pop();
        a=x;    b=y;        
        while(a>=0 && arr[a][b]=='.'){
            if(!visit[a][b]){
                visit[a][b]=1;
                cnt++;
                q.push({a,b});
            }
            a--;
        }
        a=x;    b=y;
        while(a<n && arr[a][b]=='.'){
            if(!visit[a][b]){
                visit[a][b]=1;
                cnt++;
                q.push({a,b});
            }
            a++;
        }

        a=x;    b=y;
        while(b>=0 && arr[a][b]=='.'){
            if(!visit[a][b]){
                visit[a][b]=1;
                cnt++;
                q.push({a,b});
            }
            b--;
        }

        a=x;    b=y;
        while(b<m && arr[a][b]=='.'){
            if(!visit[a][b]){
                visit[a][b]=1;
                cnt++;
                q.push({a,b});
            }
            b++;
        }
    }
    return cnt;
}
// ll BFS_2D(const vector<vector<char>>&arr, vector<vector<bool>> visit, ll n, ll m,ll a, ll b){
//     ll cnt=1;
//     queue<pair<ll,ll>>q;
//     q.push({a,b});
//     visit[a][b]=1;
//     while(!q.empty()){
//         ll x=q.front().first;
//         ll y=q.front().second;
//         q.pop();
//         a=x;    b=y;
        
//         while(a>=0 && arr[a][b]=='.'){
//             if(!visit[a][b]){
//                 visit[a][b]=1;
//                 cnt++;
//                 q.push({a,b});
//             }
//             a--;
//         }
//         a=x;    b=y;
//         while(a<n && arr[a][b]=='.'){
//             if(!visit[a][b]){
//                 visit[a][b]=1;
//                 cnt++;
//                 q.push({a,b});
//             }
//             a++;
//         }

//         a=x;    b=y;
//         while(b>=0 && arr[a][b]=='.'){
//             if(!visit[a][b]){
//                 visit[a][b]=1;
//                 cnt++;
//                 q.push({a,b});
//             }
//             b--;
//         }

//         a=x;    b=y;
//         while(b<m && arr[a][b]=='.'){
//             if(!visit[a][b]){
//                 visit[a][b]=1;
//                 cnt++;
//                 q.push({a,b});
//             }
//             b++;
//         }
//     }
//     return cnt;
// }

// ll solve(){
//     ll m, n;
//     scll(m);     scll(n);
//     vector<vector<char>> arr(n,vector<char>(m));
//     vector<vector<bool>> visit(n,vector<bool>(m,false));
//     ll a,b;

//     for(ll i=0;i<n;i++){
//         for(ll j=0;j<m;j++){
//             scanf(" %c",&arr[i][j]);
//             // cin>>arr[i][j];
//             if(arr[i][j]=='@'){
//                 a=i;
//                 b=j;
//                 arr[i][j]='.';
//             }
//         }
//     }
//     // return BFS_2D(arr,visit,n,m,a,b);
    
// }

ll sec_solve(){
    ll m, n;
    scll(m);     scll(n);
    ll a,b;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            scanf(" %c",&arr[i][j]);
            // cin>>arr[i][j];
            if(arr[i][j]=='@'){
                a=i;
                b=j;
                arr[i][j]='.';
            }
        }
    }
    return sec_BFS_2D(n,m,a,b);
    
}

int main(){
    ll n;
    scll(n);
    for(ll i=1;i<=n;i++){
        memset(visit,0,sizeof(visit));
        printf("Case %lld: %lld\n",i,sec_solve());
    }
return 0;
}
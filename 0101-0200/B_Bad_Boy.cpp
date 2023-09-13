#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,m,i,j;
    int t;
    cin>>t;
    while(t--){
        // cin>>n>>m>>i>>j;
        scanf("%d%d%d%d",&n,&m,&i,&j);
        // int x=(i-1)>(n-i)?1:n;
        // int y=(j-1)>(m-j)?1:m;
        // cout<<x<<" "<<y<<" ";
        // x=(i-1)>(n-i)?n:1;
        // y=(j-1)>(m-j)?m:1;
        // cout<<x<<" "<<y<<endl;
        // cout<<"1 1 "<<n<<" "<<m<<endl;
        printf("1 1 %d %d\n",n,m);
    }
return 0;
}
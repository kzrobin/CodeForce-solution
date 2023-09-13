#include<iostream>
#include<string>
#include<vector>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve( vector<int>&fix){

    int sum=0;
    bool empty(true);

    for(int i=0;i<101;i++){
        if(fix[i]>1) continue;
        else if(fix[i]==1 && empty){
            sum+=i;
            empty=false;
        }
      
        else if(!fix[i]){
            sum+=((empty ? 2 : 1)*i);
            break;
        }
    }
        printf("%d\n",sum);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        
        vector<int>fix(101,0);
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            fix[x]++;
        }
        solve(fix);
    }
return 0;
}
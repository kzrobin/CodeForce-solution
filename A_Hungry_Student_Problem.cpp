// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<map>
// #include<cmath>
// #include<cstring>
// #define ll long long
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;

// void solve(){
//     ll x;
//     scanf("%lld",&x);
//     if(x>2){
//         ll rem=x%3;
//         if(!rem){
//             printf("YES\n");
//             return;
//         }
//         rem=x%7;
//         if(!rem || rem==3 || rem==6){
//             printf("YES\n");
//             return;
//         }

//     }

//     printf("NO\n");
// }
// int main(){
//     ll t;
//     scanf("%lld",&t);
//     while(t--){
//         solve();
//     }
// return 0;
// }
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<cstring>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
void solve(){
    ll x;
    scanf("%lld",&x);
    if(x<3 || x==4 || x==5 || x==8 || x==11){
        printf("NO\n");
        return;
    }
    printf("YES\n");
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }
return 0;
}
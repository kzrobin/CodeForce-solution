// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #include<cstdio>
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;

// bool gcd(int x,int y){
//     y*=2;
//     while(y!=0){
//         int rem=x%y;
//         x=y;
//         y=rem;
//     }
//     if(x>1)
//         return true;
//     else return false;
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//          scanf("%d",&n);
//         vector<int>odd,even;
//         for(int i=0;i<n;i++){
//             int x;
//              scanf("%d",&x);
//             (x%2) ? odd.push_back(x) : even.push_back(x);
//         }
//         sort(odd.rbegin(),odd.rend());

//         for(int i=0;i<odd.size();i++){
//             even.push_back(odd[i]);
//         }
//         int flag=0;

//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++)
//                 flag+=gcd(even[i],even[j]);
//         }
//         printf("%d\n",flag);
//     }
// return 0;
// }


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
bool gcd(int x,int y){
    y*=2;
    while(y){
      int rem=x%y;
      x=y;
      y=rem;
    }
    if(x>1)
        return true;
    else return false;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int>odd,even;
        for(int i=0;i<n;i++){
            int x;
           scanf("%d",&x);
            if(x%2)
                odd.push_back(x);
            else even.push_back(x);
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
 
        for(int i=0;i<odd.size();i++){
            even.push_back(odd[i]);               
        }
        int od=odd.size(),ev=even.size();
        int flag=0;
 
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
                flag+=gcd(even[i],even[j]);
        }
        printf("%d\n",flag);
    }
return 0;
}
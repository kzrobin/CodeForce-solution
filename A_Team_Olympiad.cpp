// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     int mat=0,ph=0,pro=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]==1)
//             pro++;
//         else if(arr[i]==2)
//             mat++;
//         else ph++;
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;
//     int team=min(mat,min(ph,pro));
//     if(team){
//         cout<<team<<endl;
//         while(team--){
//             int x=1;
//             for(int i=0;i<n;i++){
//                 if(arr[i]==x){
//                     cout<<i+1<<" ";
//                     arr[i]=0;
//                     x++;
//                     i=-1;
//                     if(x==4)
//                         break;
//                 }
//             }
//             cout<<endl;
//         }   
//     }
//     else cout<<"0"<<endl;
// return 0;
// }

// #include <bits/stdc++.h>
// #define INF 0x3f3f3f3f
// using namespace std;

// typedef long long ll;

// int main() {
//     int n; scanf("%d",&n);
//     vector<int> V[3];
//     for(int i=0; i<n;i++){
//         int val; scanf("%d",&val);
//         V[val-1].push_back(i+1);
//     }

//     for(int i=0;i<V[0].size();i++)
//         cout<<V[1][i]<<" ";
//     cout<<endl;
//      for(int i=0;i<V[1].size();i++)
//         cout<<V[1][i]<<" ";
//     cout<<endl;
//     for(int i=0;i<V[2].size();i++)
//         cout<<V[1][i]<<" ";
//     cout<<endl;


//     int minValue = min(V[0].size(),min(V[2].size(),V[1].size()));
//     printf("%d\n",minValue);
//     for(int i=0; i<minValue;i++){
//         printf("%d %d %d\n",V[0][i],V[1][i],V[2][i]);
//     }
//     return 0;
// }

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec[3];
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        vec[x-1].push_back(i);
    }
    int team=min(min(vec[0].size(),vec[1].size()),vec[2].size());
    cout<<team<<endl;
    for(int i=0;i<team;i++){
        cout<<vec[0][i]<<" "<<vec[1][i]<<" "<<vec[2][i]<<endl;
    }
    return 0;
}
// #include<iostream>
// #include<string>
// #include<vector>
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// using namespace std;

// int main(){
//     long t;
//     cin>>t;
//     while(t--){
//         string x;
//         cin>>x;
//         string c_f=x,c_z=x;
//         while(c_f[c_f.size()-1]!='5'){
//             if(c_f.size()<2)
//                 break;
//             c_f.replace(c_f.size()-1,1,"");
//         }
//         while(c_f[c_f.size()-2]!='2'&& c_f[c_f.size()-2]!='7'){
//             if(c_f.size()<2)
//                 break;
//             c_f.replace(c_f.size()-2,1,"");
//         }
//         // cout<<c_f<<endl;

//          while(c_z[c_z.size()-1]!='0'){
//             if(c_z.size()<2)
//                 break;
//             c_z.replace(c_z.size()-1,1,"");
//         }
//         while(c_z[c_z.size()-2]!='0'&& c_z[c_z.size()-2]!='5'){
//             if(c_z.size()<2)
//                 break;
//             c_z.replace(c_z.size()-2,1,"");
//         }
//         // cout<<c_z<<endl;
//         cout<<min(x.size()-c_z.size(),x.size()-c_f.size())<<endl;
//     }
// return 0;
// }



// #include <iostream>
// #include <algorithm>
// #include <string>
// #include<vector>
// using namespace std;

// int main() {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         std::string s;
//         std::cin >> s;
//         long long n = std::stoll(s);
//         if (n % 25 == 0) {
//             std::cout << 0 << std::endl;
//         } 
//         else {
//             int ls = s.length();
//             int ans = ls + 10, i;
//             for (const auto po :vector<string> {"00", "52", "05", "57"}) {
//                 i =0;
//                 for (const auto& x : po) {
//                     i++;
//                     // cout<<x<<" ";
//                     while (i <= ls && s[ls - i] != x) {
                       
//                         i++;
//                     }
//                 }
//                 // cout<<endl;
//                 if (i <= ls) {
//                     ans = std::min(ans, i - 2);
//                     // ans=i-2;
//                 }
//             }
//             std::cout << ans << std::endl;
//         }
//     }
//     return 0;
// }

#include<iostream>
#include<string>
#include<vector>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    ll t;
    // cin>>t;
    scanf("%lld",&t);
    while(t--){
        char st[20];
        scanf("%s",st);

        string t_five(st);
        // cin>>t_five;
        int ans=t_five.length();
        for(auto p:vector<string>{"00","52","05","57"}){
            int i=0;
            for(auto x : p){
                i++;
                while(i<=t_five.length() && t_five[t_five.size()-i]!=x)
                    i++;
            }
            ans=min(ans,i-2);
        }
        // cout<<ans<<endl;
        printf("%d\n",ans);
    }
return 0;
}
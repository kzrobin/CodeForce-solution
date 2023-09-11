#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    IOS
    int n;
    cin>>n;
    string polydedron;

    string I="Icosahedron", C="Cube", T="Tetrahedron";
    string D="Dodecahedron", O="Octahedron";
    int t=4,c=6,o=8,d=12,i=20;

    int flag=0;
    for(int j=0;j<n;j++){
        cin>>polydedron;

        if(polydedron==O)
            flag+=o;
        else if(polydedron==C)
            flag+=c;
        else if(polydedron==T)
            flag+=t;
        else if(polydedron==D)
            flag+=d;
        else
            flag+=i;
    }
    cout<<flag<<endl;

return 0;
}
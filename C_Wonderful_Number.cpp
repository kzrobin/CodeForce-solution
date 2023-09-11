#include<iostream>
using namespace std;
bool palindrome(int n){
    int a[100],reversed_binary[100],binary[100],i;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    for(int j=i-1, k=0;j>=0;j--,k++)
        binary[k]=a[j];

    for(int j=0;j<i;j++){
        if(binary[j]!=a[j])
            return false;
    }
    return true;
}


int odd(int n)
{
    if((n%2)) return true;
    else return false;
}


int main()
{
    int n;
    cin>>n;
    if(palindrome(n) && odd(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
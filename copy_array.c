#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    int copy_arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    int lft=0, rht=n-1;

    while(lft<=rht){
        copy_arr[lft]=arr[lft];
        copy_arr[rht]=arr[rht];
        lft++;
        rht--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",copy_arr[i]);
    }
    printf("\n");
}
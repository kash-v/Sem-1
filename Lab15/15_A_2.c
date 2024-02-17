#include<stdio.h>
int main(){
    int i,n,ncount=0;
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            ncount++;
        }
    }
    printf("Count of negative numbers is %d",ncount);
    return 0;
}
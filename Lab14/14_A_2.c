#include<stdio.h>
int main(){
    int pcount=0,ncount=0,i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=0){
            pcount++;
        }else{
            ncount++;
        }
    }
    printf("the count of positive and negative numbers in the array is %d and %d",pcount,ncount);
    return 0;
}
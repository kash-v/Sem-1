#include<stdio.h>
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%3==0){
            count++;
        }
    }
    printf("Count of numbers divisible by 3 are %d",count);
    return 0;
}
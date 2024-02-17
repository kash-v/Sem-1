#include<stdio.h>
int main(){
    int avg,sum=0,n,i,a=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        if(arr[i]>avg){
            a++;
        }
    }
    printf("array elements which are greater than avg are %d",a);
    return 0;
}
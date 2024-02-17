#include<stdio.h>
int main(){
    int n,i,avg,sum=0,min,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }if(max<arr[i]){
            max=arr[i];
        }
    }
    avg=sum/n;
    printf("sum of array: %d\n",sum);
    printf("avg of array: %d\n",avg);
    printf("max of array: %d\n",max);
    printf("min of array: %d\n",min);

    return 0;
}
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    i=0;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
        }
    }
    /*for(i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            arr[i+1]=arr[i];
        }
    } */
    printf("The largest element in the array is %d",arr[n-1]);
    return 0;
}

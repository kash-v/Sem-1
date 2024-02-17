#include<stdio.h>
int main(){
    int i,n;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=n-1;i>=0;i--){
        scanf("%d", &arr[i]);

    }for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
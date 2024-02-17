#include<stdio.h>
int main(){
    int i,n,j,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<(n/2);i++,j--){
        a=arr[i];
        arr[i]=arr[j];
        arr[j]=a;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
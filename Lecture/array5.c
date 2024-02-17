#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num[n];
    for(i=0;i<n;i++){
        num[i]=arr[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    return 0;
}
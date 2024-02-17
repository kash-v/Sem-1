#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=n;i>0;i--){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
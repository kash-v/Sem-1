#include<stdio.h>
int main(){
    int i,n,x;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter element to search:");
    scanf("%d",&x);
    printf("enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }for(i=0;i<n;i++){
        if(arr[i]==x){
            printf("the element is at arr[%d] which is the %d element",i,i+1);
        }
    }
    return 0;
}
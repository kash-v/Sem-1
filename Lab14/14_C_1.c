#include<stdio.h>
int main(){
    int n,i,j,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int dup[n];
    for(i=0;i<n;i++){
        for(j=0;(j<n && j!=i);j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
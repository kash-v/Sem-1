#include<stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                
            }

        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
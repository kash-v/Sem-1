#include<stdio.h>
int main(){
    int i,n,x,a,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("New Value:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    arr[i]=x;
    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(i=0;i<=n;i++){
         printf("%d ",arr[i]);
    }
    return 0;
}

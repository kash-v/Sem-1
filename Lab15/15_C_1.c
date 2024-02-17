#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max,m;
    max=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    m=arr[0];
    for(i=0;i<n;i++){
        if(m<arr[i] && m<max){
            m=arr[i];
        }
    }
    printf("%d\t%d",max,m);
    return 0;
}
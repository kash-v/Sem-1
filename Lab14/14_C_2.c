#include<stdio.h>
int main(){
    int i,n;
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0,j;
    int missing[a];
    for(i=0;i<10;i++){
        for(j=0;j<n;j++){
        if(num[i]==arr[j]){
            continue;
        }else{
            missing[a]=num[i];
            a++;
            i++;
        }
    }
    }
    for(j=0;j<=a;j++){
        printf("%d ",missing[j]);
    }
    return 0;
}
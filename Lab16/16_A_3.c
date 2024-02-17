#include<stdio.h>
int main(){
    int i,j;
    int arr[20][2];
    for(i=0;i<20;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<20;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
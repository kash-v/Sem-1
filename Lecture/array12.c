#include<stdio.h>
int main(){
    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",arr[i][j]);
        }
    }
    int num[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            num[j][i]=arr[i][j];
        }
    }
    printf("transpose of the array is %d",num[3][3]);
    return 0;
}
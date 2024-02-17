#include<stdio.h>
int main(){
    int arr[2][2];
    int data[2][2];
    int i,j;
    int num[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           num[i][j]=arr[i][j]+data[i][j]; 
        }
    }
    printf("addition of the matrix is: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
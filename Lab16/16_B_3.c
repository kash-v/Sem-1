#include<stdio.h>
int main(){
    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                printf("%d",arr[i][j]);
                sum=sum+arr[i][j];
            }
            printf("\n");
        }
    }
    printf("sum of diagonal elements is %d",sum);
    return 0;

}
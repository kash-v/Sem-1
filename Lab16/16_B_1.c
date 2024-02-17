#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",arr[i][j]);
        }
    }
    int num[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            num[j][i]=arr[i][j];
        }
    }
    printf("transpose of the array is %d",num[n][m]);
    return 0;
}
#include<stdio.h>
int mian(){
    int i,j,n,m,p,q;
    printf("enter order of 1st matrix: \n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter order of 2nd matrix: \n");
    scanf("%d %d",&p,&q);
    int num[p][q];
    int add[n][m];
    if(n==p && m==q){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&num[i][j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                add[i][j]=arr[i][j]+num[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d ",add[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("invalid order of matrix");
    }
    
    return 0;

}
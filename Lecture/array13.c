#include<stdio.h>
int main(){
    int n,m,p,q;
    printf("enter order of the 1st matrix: ");
    scanf("%d %d",&n,&m);
    printf("enter order of the 2nd matrix: ");
    scanf("%d %d",&p,&q);
    int num[n][m];
    int num2[p][q];
    printf("enter elements of 1st matrix: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&num[n][m]);
        }
    }
    printf("enter elements of 2nd matrix: ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&num2[p][q]);
        }
    }
    int mul[n][p];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mul[i][j]=0;
            mul[i][j]=mul[i][j]+(num[i][j]*num2[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
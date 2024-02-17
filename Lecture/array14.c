#include<stdio.h>
int main(){
    int n,m,p,q,i,j;
    printf("enter order of the 1st matrix: \n");
    scanf("%d %d",&n,&m);
    printf("enter order of the 2nd matrix: \n");
    scanf("%d %d",&p,&q);
    int num[n][m];
    int num2[p][q];
    if(m!=p){
        printf("invalid for multiplication");
    }else{
    printf("enter elements of 1st matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&num[n][m]);
        }
    }
    printf("enter elements of 2nd matrix: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
                scanf("%d",&num2[p][q]);
        }
    }
    }
    int k;
    int result[n][q];
    //multiplication
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            int temp=0;
            for(k=0;k<p;k++){
                temp=temp+num[i][k] * num2[k][j];
            }
            result[i][j]=temp;
        }
    }
    printf("the resultant matrix is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    

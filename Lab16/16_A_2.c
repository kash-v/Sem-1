#include<stdio.h>
int main(){
    int i,j,n,m,ncount=0,pcount=0,zcount=0;
    printf("enter the order of the matrix: \n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                zcount++;
            }
            if(arr[i][j]<0){
                ncount++;
            }
            if(arr[i][j]>0){
                pcount++;
            }
        }
    }
    printf("count of positive numbers is: %d\n",pcount);
    printf("count of negative numbers is: %d\n",ncount);
    printf("count of zero is: %d\n",zcount);
    return 0;
}
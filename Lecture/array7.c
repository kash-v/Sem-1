#include<stdio.h>
int main(){
   int i,j,zcount=0,pcount=0,ncount=0;
   int arr[3][3];
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
   } 
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(arr[i][j]==0){
            zcount++;
        }else if(arr[i][j]<0){
            ncount++;
        }else if(arr[i][j]>0){
            pcount++;
        }
        }
    }
    printf("Count of +ve nos is: %d\n",pcount);
    printf("Count of -ve nos is: %d\n",ncount);
    printf("Count of zero is: %d\n",zcount);
    return 0;
   } 
  

#include<stdio.h>
void swap(int* a,int *b,int n){
    int i,temp;
    for(i=0;i<n;i++){
            temp= a[i];
            a[i]=b[i];
            b[i]=temp;
    }
}
int main(){
    int m,i;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    
    int num[m];
    for(int i=0;i<m;i++){
        scanf("%d",&num[i]);
    }
     
    swap(arr,num,m);
    for(i=0;i<m;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<m;i++){
        printf("%d",num[i]);
    }
    return 0;
}
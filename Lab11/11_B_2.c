#include<stdio.h>
int main(){
    int n,a;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]=0;
    }
    for(;n!=0;){
        a=n%10;
        n=n/10;
        arr[a]=arr[a]+1;
    }
    for(int i=0;i<10;i++){
        printf("frequency of %d is %d\n",i,arr[i]);
    }
    return 0;
}
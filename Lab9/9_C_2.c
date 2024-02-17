#include<stdio.h>
int main(){
    int n,i=0,a=0,j,temp;
    scanf("%d",&n);
    int arr[i];
    for(i=0;n!=0;i++){
        arr[i]=n%2;
        n=n/2;
        a++;
    }
    
    for(i=0,j=(a-1) ;i<(a/2) ; i++,j--){
        temp= arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(i=0;i<a;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
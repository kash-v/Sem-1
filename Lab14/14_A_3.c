#include<stdio.h>
int main(){
    int even=0,odd=0,i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if((arr[i]) % 2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("number of even and odd numbers in the array are %d ans %d",even,odd);
    return 0;
}
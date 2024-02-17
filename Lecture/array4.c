#include<stdio.h>
int main(){
    int n,i,evencount=0,oddcount=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount=evencount+1;
        }else{
            oddcount=oddcount+1;
        }
    }
    printf("count of even elements of array are: %d\n",evencount);
    printf("count of odd numbers is : %d",oddcount);
    return 0;
}
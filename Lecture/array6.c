#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            a++;
            continue;
            
        }else{
            break;
        }
    }
    if(a==(n-1)){
        printf("yes it is in ascending order");
    }else{
        printf("it is not in ascending order");
    }
    
    return 0;
}
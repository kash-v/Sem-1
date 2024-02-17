#include<stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    float arr[n];
    for(i=0;i<n;i++){
        scanf("%f",arr[i]);
    }
    //avg in F
    float avg=0.0;
    for(i=0;i<n;i++){
        avg=(avg+arr[i])/n;
    }
    printf("average in F is: %f", avg);
    //min in F
    
    for(i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            arr[i+1]=arr[i];
        }
    }
    printf("minimum tempt in F is: %f", arr[n-1]);
    //max in F
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
        }
    }
    printf("maximum tempt in F is: %f", arr[n-1]);
    //avg in C

    float avgC=0.0;
    for(i=0;i<n;i++){
        arr[i]=(arr[i]-32) * (9/5);
        avgC=(avg+arr[i])/n;
    }
    printf("average in C is: %f", avgC);
    //min in C

    for(i=0;i<n;i++){
        arr[i]=(arr[i]-32) * (9/5);
        arr[i+1]=(arr[i+1]-32) * (9/5);
        if(arr[i]<arr[i+1]){
            arr[i+1]=arr[i];
        }
    }
    printf("minimum tempt in C is: %f", arr[n-1]);
    //max in C

    for(i=0;i<n;i++){
        arr[i]=(arr[i]-32) * (9/5);
        arr[i+1]=(arr[i+1]-32) * (9/5);
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
        }
    }
    printf("maximum tempt in C is: %f", arr[n-1]);
    
    return 0;
}
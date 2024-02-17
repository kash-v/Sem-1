#include<stdio.h>
int main(){
    int i,j;
    for(i=5;i>=0;i--){
        for(j=1;j<= i-1;j++){
            printf(" ");
        }
        for(j=1;j>=i-1;j++){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
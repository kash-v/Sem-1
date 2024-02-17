#include<stdio.h>
int main(){
    int i,j;
    char ch='A';
    int n=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c",ch++);
            }
            else{
                printf("%d",n++);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
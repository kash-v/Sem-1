#include<stdio.h>
int main() 
{
    int n;
    //scanf("%d", &n);
    for (int i = 0; i < 4; i++) {
        for (int j = i; j >= 0; j--) {
            printf("%d ", 4 - i + j);
        }
        printf("\n");
    }
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         printf("%d ", 4 - i + j);
    //     }
    //     printf("\n");
    // }
    int a=4;
    for(int i=0;i<=2;i++){
        for(int j=5;j>1;j++){
            if(j%2==1){
                printf("%d",a);
            }
            a--;
        }
        printf("\n");
    }
    return 0;
}
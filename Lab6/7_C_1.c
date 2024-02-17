#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    if ((a^b)==0){
        printf("Numbers are equal");
    }else{
        printf("NUmbers are not equal");
    }
    return 0;
}
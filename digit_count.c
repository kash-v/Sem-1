#include<stdio.h>
int digitCount(int num){
    if(num==0){
        return 0;
    }
    return 1+digitCount(num/10);
}
int main(){
    int n;
    scanf("%d",&n);
    int c=digitCount(n);
    printf("%d",c);
    return 0;
}
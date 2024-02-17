#include<stdio.h>
int power(int a,int b){
    if(b!=0){
    return (a*power(a, b-1));
    }else{
        return 1;
    }
}
int main(){
    int x,y,n;
    scanf("%d %d",&x,&y);
    n=power(x,y);
    printf("answer is: %d",n);
    return 0;
}
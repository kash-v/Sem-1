#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
int main(){
    int a,b,maximum,minimum;
    scanf("%d %d",&a,&b);
    maximum=max(a,b);
    minimum=min(a,b);
    printf("max num is %d\n",maximum);
    printf("min num is %d",minimum);
    return 0;
}
#include<stdio.h>
float max(float a,float b,float c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }if(b>a){
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}
int main(){
    float a,b,c,maximum;
    scanf("%f %f %f",&a,&b,&c);
    maximum=max(a,b,c);
    printf("the maximum out of the numbers is %f",maximum);
    return 0;
}
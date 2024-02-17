#include<stdio.h>
#include<math.h>
int main(){
    int i=0;
    float n;
    while(i<10){
        printf("%d\t", i);
        n=sqrt(i);
        printf("sqrt: %f\n", n);
        i++;
    }
    return 0;

}
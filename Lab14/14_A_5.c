#include<stdio.h>
int main(){
    int i,h=0,w=0;
    int height[5],weight[5];
    for(i=0;i<5;i++){
        scanf("%d", &height[i]);
        scanf("%d", &weight[i]);
        if(height[i]>170){
            h++;
        }if(weight[i]<50){
            w++;
        }
    }
    printf("people whose height is greater than 170 cm are %d\n",h);
    printf("people whose weight is greater than 50kg are %d\n",w);
    return 0;
}
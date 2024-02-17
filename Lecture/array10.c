#include<stdio.h>
int main(){
    float a[]={10.30,100.40,50.80,90.80,100};
    float sumF=0,avgf,minf,maxf,avgc,minc,maxc;
    int i;
    minf=a[0];
    maxf=a[0];
    for(i=0;i<5;i++){
        sumF=sumF+a[i];
        if(minf>a[i]){
            minf=a[i];
        }if(maxf<a[i]){
            maxf=a[i];
        }
    }
    for(i=0;i<5;i++){
        avgf=sumF/5;
    }
    float num[5];
    float sumc=0;
    minc=num[0];
    maxc=num[0];
    for(i=0;i<5;i++){
        num[i]=(a[i]-32)* (9/5);
        sumc=sumc+num[i];
        if(minc>num[i]){
            minc=num[i];
        }if(maxc<num[i]){
            maxc=num[i];
        }
        avgc=sumc/5;
    }
    printf("Minimum tempt in F is: %f F\n",minf);
    printf("Maximum tempt in F is: %f F\n",maxf);
    printf("Average tempt in F is: %f F\n",avgf);
    printf("Minimum tempt in C is: %f C\n",minc);
    printf("Maximum tempt in C is: %f C\n",maxc);
    printf("Average tempt in C is: %f C\n",avgc);
    return 0;
}
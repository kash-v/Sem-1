#include<stdio.h>
int main(){
    int R, G, B;
    float C, M, Y, K, white,n, l ,m;
    printf("enter values in RGB format:");
    scanf("%d %d %d", &R, &G, &B);
   
    l= R/255.0;
    n= G/255.0;
    m= B/255.0;
    if(R>G && R>B){
        white=l;
    }else if (G>R && G>B){
        white=n;
    }else if (B>R && B>G){
        white=m;
    }
    
    C=(white-l)/white;
    M=(white-n)/white;
    Y=(white-m)/white;
    K=1-white;
    
    if(R==0 && G==0 && B==0){
        C=0;
        M=0;
        Y=0;
        K=1;
    }
       
    printf("%f %f %f %f", C,M,Y,K);

    return 0;
}

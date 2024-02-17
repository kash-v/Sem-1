#include<stdio.h>
int permutation(int n,int k){
    int a=1;
    for(int i=1; i<=n; ++i ){
        a*=i;
    }
    int b=1;
    for(int i=1; i<=(n-k); ++i ){
        b*=i;
    }
    return a/b;
}
int combination(int n,int k){
    int a=1;
    for(int i=1; i<=n; ++i ){
        a*=i;
    }
    int b=1;
    for(int i=1; i<=(n-k); ++i ){
        b*=i;
    }
    int c=1;
    for(int i=1; i<=k; ++i ){
        c*=i;
    }
    return a/(c*b);
}

int main(){
    int n,k,a,b;
    scanf("%d",&n);
    scanf("%d",&k);
    a=permutation(n,k);
    b=combination(n,k);
    printf("the number of permutations of %d objects taken %d at a time is: %d\n",n,k,a);
    printf("the number of combinations of %d objects taken %d at a time is: %d\n",n,k,b);
}
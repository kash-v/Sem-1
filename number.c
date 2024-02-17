#include<stdio.h>
int main(){
    int n, i=1,a,b=1,c,d;
    char num[10][6]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=n-1;
        while(a!=0){
            b= b*10;
            a--;
        }
        d=n/b;
        c= n%b;
        printf("%s", num[d]);
    }
    return 0;
}
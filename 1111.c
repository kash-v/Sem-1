#include<stdio.h>
struct Time{
    int h;
    int m;
    int s;
};
struct Time time(){
    struct Time t1,t2,t3;
    scanf("%d",&t1.h);
    scanf("%d",&t1.m);
    scanf("%d",&t1.s);
    scanf("%d",&t2.h);
    scanf("%d",&t2.m);
    scanf("%d",&t2.s);
    t3.h=t1.h+t2.h;
    t3.m=t1.m+t2.m;
    t3.s=t1.s+t2.s;
    return t3;
}
int main(){
    struct Time t;
    t=time();
    printf("%d:%d:%d",t.h,t.m,t.s);
    return 0;
}
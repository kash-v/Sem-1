#include<stdio.h>
struct Distance{
    int inch;
    float feet;
};
int main(){
    struct Distance d1,d2,result;
    scanf("%d",&d1.inch);
    scanf("%f",&d1.feet);
    scanf("%d",&d2.inch);
    scanf("%f",&d2.feet);
    result.inch = d1.inch + d2.inch;
    result.feet = d1.feet + d2.feet;
    printf("%d\n",result.inch);
    printf("%f\n",result.feet);
    return 0;
}
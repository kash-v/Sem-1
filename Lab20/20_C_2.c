#include <stdio.h>
struct Time
{
    int hour;
    int min;
    int sec;
};
int main()
{
    struct Time t1, t2, total;
    printf("enter first time: ");
    scanf("%d", &t1.hour);
    scanf("%d", &t1.min);
    scanf("%d", &t1.sec);

    printf("enter second time: ");
    scanf("%d", &t2.hour);
    scanf("%d", &t2.min);
    scanf("%d", &t2.sec);

    total.sec = t1.sec + t2.sec;
    total.min = t1.min + t2.min + (total.sec / 60);
    total.hour = t1.hour + t2.hour + (total.min / 60);
    total.min = total.min % 60;
    total.sec = total.sec % 60;
    printf("%d hours ", total.hour);
    printf("%d mins ", total.min);
    printf("%d sec ", total.sec);
    return 0;
}
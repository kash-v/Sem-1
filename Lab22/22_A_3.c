#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n,sizeof(int));
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
        sum = sum + *(ptr+i);
    }
    printf("%d", sum);
    free(ptr);
    return 0;
}
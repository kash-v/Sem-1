#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1;
    ptr1 = (int *)malloc(1 * sizeof(int));
    char *ptr2;
    ptr2 = (char *)malloc(1 * sizeof(char));
    float *ptr3;
    ptr3 = (float *)malloc(1 * sizeof(float));

    scanf("%d", &ptr1);
    scanf("%f", &ptr3);
    scanf("%c ", &ptr2);

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
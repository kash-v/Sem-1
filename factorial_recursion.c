#include <stdio.h>
int factorial(int number){
    if(number == 1 || number ==0){
        return 1;
    }else{
        return (number * factorial(number - 1));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("factorial of %d is %d", n, factorial(n));
    return 0;
}
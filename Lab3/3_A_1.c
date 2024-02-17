#include<stdio.h>
#include<string.h>
int main(){
    int n,i=0;
    printf("enter a number: ");
    scanf("%d",&n);

    char days[7][10]= {"Sunday", "MOnday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
    i=n%7;
    printf("%s", days[i]);
    return 0;
}

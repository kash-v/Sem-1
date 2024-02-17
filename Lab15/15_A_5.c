#include<stdio.h>
int main(){
    int i,n,a=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    printf("%s\n",arr);
    for(i=0;arr[i]!='\0';i++){
        a++;
    }
    printf("%d",a);
    return 0;
}
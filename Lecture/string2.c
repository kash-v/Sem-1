//strlen()=finds the number of characters in a string
//'\0' is counted by strlen()
#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    gets(arr);
    printf("%d",strlen(arr));
    return 0;
}
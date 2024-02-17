//string length without strlen() function
#include<stdio.h>
int main(){
    char arr[100];
    gets(arr);
    int count=0,i;
    for(i=0;arr[i]!='\0';i++){
        count++;
    }
    printf("The length of the string is: %d",count);
    return 0;
}
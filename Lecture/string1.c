//string is refered by default by its address so no need of '&' in scanf
//reads only one word
#include<stdio.h>
int main(){
    char name[1];
    gets(name);
    printf("%s",name);
    return 0;
}
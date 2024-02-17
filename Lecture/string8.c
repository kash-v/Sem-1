//strcat=(string concatination) addtion of string. s2 will be added to s1 and s2 remains unchanged.
//strcat(s1,s2)
#include<stdio.h>
int main(){
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    int i,a;
    for(i=0;s1[i]!='\0';i++){
        a++;
    }
    for(i=0;s2[i]!='\0';i++){
        s1[a]=s2[i];
        a++;
    }  
    s1[a]='\0';
    printf("%s",s1);
    return 0;
}
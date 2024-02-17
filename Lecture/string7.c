//strcpy=string copy
//strcpy(s1,s2)=elements of s2 will be copied in s1,s2 remains unchanged.
#include<stdio.h>
int main(){
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    int i;
    
    for(i=0;s2[i]!='\0';i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
    printf("%s",s1);
    
    return 0;
}
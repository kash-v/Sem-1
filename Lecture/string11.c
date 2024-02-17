//strlwr=converts s1 to lowercase letters
#include<stdio.h>
int main(){
    char s1[100];
    gets(s1);
    for(int i=0; s1[i]!='\0';i++){
        if(s1[i]<='Z' && s1[i]>='A'){
            s1[i]=s1[i]+32;
        }
        

    }
    printf("%s",s1);
    return 0;
}
#include<stdio.h>
void replaceChar(char s[],char a,char b){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]== a){
            s[i]=b;
        }
    }
    printf("%s",s);
}

int main(){
    char s[100];
    gets(s);
    char c,a;
    scanf("%c",&c);
    scanf(" %c",&a);
    char s2[100];
    replaceChar(s,c,a);
    return 0;
}
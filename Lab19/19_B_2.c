#include<stdio.h>
char upcase(char c[]){
    int i;
    for(i=0;c[i]!='\0';i++){
        if(c[i]>='a' && c[i]<='z'){
            c[i]=c[i]-32;
        }  
    }
    c[i]='\0';
    printf("%s",c);
}
int main(){
    char ch[100];
    scanf("%s",ch);
    upcase(ch);
    return 0;
}
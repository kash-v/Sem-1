//strrev
#include<stdio.h>
int main(){
    char s1[1000];
    gets(s1);
    int i,a;
    for(i=0;s1[i]!='\0';i++){
        a++;
    }
    int l=a;
    char ch;
    for(i=0;i<a/2;i++){
        ch=s1[i];
        s1[i]=s1[a];
        s1[a]=ch;
        a--;

    }
    s1[l++]='\0';
    printf("%s",s1);
    return 0;
    
}
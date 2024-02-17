#include<stdio.h>
int main(){
    char s[100],s1[100];
    gets(s);
    gets(s1);
    int i,n;
    scanf("%d",&n);
    for(i=0;s1[i]!='\0' && i<n;i++){
        s[i]=s1[i];
    }
    s[i]='\0';
    printf("%s",s);
    return 0;
}
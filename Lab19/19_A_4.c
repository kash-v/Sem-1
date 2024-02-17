#include<stdio.h>
int  findChar(char s[],char a){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]== a){
            return i+1;
        }
    }
    
}
int main(){
    char s[100];
    gets(s);
    char c;
    scanf("%c",&c);
    int ans;
    ans=findChar(s,c);
    printf("%d",ans);
    return 0;
}
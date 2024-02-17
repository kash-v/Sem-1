//strcmp=string compare
//3 possible outcomes=0,positive,negative
#include<stdio.h>
#include<string.h>

int main(){
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    if(strcmp(s1,s2)==0){
        printf("string are same");
    }
    else{
        printf("string are not same");
    }
    
}
#include<stdio.h>
int main(){
    char a='A';
    while(a<='z'){
        if(a>='[' && a<='`'){
            a++;
            continue;
        } 
        
        printf("%c",a);
        a++;
    }
    
    return 0;
    
}
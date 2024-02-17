#include<stdio.h>
int main(){
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    int count=0,count2=0,i;
    for(i=0;s1[i]!='\0';i++){
        count++;
    }
    for(i=0;s2[i]!='\0';i++){
        count2++;
    }
    int a=0;
    if(count==count2){
        for(i=0;i<count;i++){
            
                if(s1[i]==s2[i]){
                    a++;
                    continue;
                    
                }else{
                    printf("string are not same");
                    break;
                }

            }
        
        }
        
    
    if(a==count){
        printf("String are same");
    }else{
        printf("String are not same");
    }
    return 0;
}
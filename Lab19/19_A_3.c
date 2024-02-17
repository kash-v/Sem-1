#include<stdio.h>
#include<string.h>

int strlen(char s){
    int l=strlen(s);
    return l;
}

int strcmp(char s,char s1){
    if(strcmp(s,s1)==0){
        return 1;
    }else{
        return 0;
    }
}


char strcpy(char s[], char s1[]){
    for(int i=0;i!='\0';i++){
        s[i]=s1[i];
    }
    s[i]='\0';
    return s;
}

char strcat(char s[],char s1[]){
    int a=1,i;
    for(int i=0;s[i]!='\0';i++){
        a++;
    }
    for(int i=0;s1[i]!='\0';i++){
        s[a]=s1[i];
    }
    s[i]='\0';
    return s;
}

char strrev(char s[]){
    int a=1;
    for(int i=0;s[i]!='\0';i++){
        a++;
    }
    for(int i=0,j=a;i=a/2;i++,j--){
        char c[100]=s[j];
        s[j]=s[i];
        s[i]=c[j];
    }
    return s;
}

char strlwr(char s[]){
    int i;
    for(int i=0; s[i]!='\0';i++){
        if(s[i]<='Z' && s[i]>='A'){
            s[i]=s[i]+32;
    }
    }
    return s;
}

char strupr(char s[]){
    int i;
    for(int i=0; s[i]!='\0';i++){
        if(s[i]<='z' && s[i]>='a'){
            s[i]=s[i]-32;
    }
    }
    return s;
}


int main(){
    char s1[100];
    char s2[100];

    gets(s1);
    gets(s2);

    
    //strlen  
    printf("length of s1 is %d",strlen(s1));
    printf("length of s2 is %d",strlen(s2));
    //strcmp
    if(strcmp(s1,s2)){
        printf("string are same");
    }else{
        printf("string are not same");
    }
    //strcpy
    printf("copied string is %s",strcpy(s1,s2));
    //strcat
    printf("%s",strcat(s1,s2));
    //strrev
    printf("reversed string is %s",strrev(s1));
    //strlwr
    printf("string in lowercase is %s",strlwr(s1));
    //strupr
    printf("string in uppercase is %s",strupr(s2));
    
    return 0;
}
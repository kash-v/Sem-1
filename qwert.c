#include<stdio.h>


// char[] str(char a[]){
//     int i=0;
//     a[i]=a[i]-32;
//     return a;
// }

char* str()
{
    char a={'a','b'};
    return a;
}
int main(){
    char name[100];
    scanf("%s",name);
    printf("name: %s",str());
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char num[1000];
    scanf("%s",num);
    printf("%s",num);
    int l=strlen(num);
    printf("%d",l);
    char arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i,j,count=0;
    for(i=0;i<10;i++){
        for(j=0;j<l;j++){
            printf("%s",num[i]);
            if(num[j]==arr[i]){
                count++;
            }
        }
        printf("%d ",count);
        count=0;
        
    }
      
    return 0;
}
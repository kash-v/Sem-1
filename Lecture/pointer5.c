//city[1] and city+1 is equivalent
//**(city+1)+1 means city[1] nu 1st mns baroda and enu pointer (1st value) to B and ema +1 mns C
#include<stdio.h>
int main(){
    char city[3][25]={"Baroda","rajkot","morbi"};
    printf("\n%s",city[1]+3);
    printf("\n%c",**(city+1)+2);
    return 0;
    
}
//auto represents local variable //int stores in auto sorage class //destroys as soon as the function is executed
//static variable initiales only ones and is present throughout the entire program but is only accessible locally //declared once but can be initialized multiple times
//register - variable is stored in register of the computer// can only be declared and initialized, user defined input cannot be taken and address of this variable cannot be known by us ,only the computer knows it 
//extern- 
void printData(){
    static int a=5;
    //a=6;
    a++;
    printf("%d",a);
}
int main(){
    printData();
    printData();
    printData();
    return 0;
}
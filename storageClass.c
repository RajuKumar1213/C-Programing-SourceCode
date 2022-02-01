#include <stdio.h>


// int globalVar ;// It will automatically intilized by 0
int myFunc(int a , int b){
    // auto intmyVar; 
    //myVar = a + b ;
    // To use the externalmyVar
    // extern intmyVar; --> If you want
    // extern int sum2 ;
    // int sums =myVar + sum2;
    // printf("ThemyVar is %d\n", sums);
    // return sums;

    static int myVar = 9;
    printf("The value of myVar is %d\n", myVar); 
    myVar++;
 }
//  int sum2 = 4; // these are global variables
//  intmyVar = 534;

int main(){
    // Declaration --> Telling the compilor about the variable (No Space reserved)
    // Defination --> Declaration + space reservation
    register int intmyVar = myFunc(2 , 4);
    intmyVar = myFunc(2 , 4);
    intmyVar = myFunc(2 , 4);
    intmyVar = myFunc(2 , 4);
    intmyVar = myFunc(2 , 4);
    // printf("The value ofmyVar is %d \n",myVar);   
    // printf("The value of globalVar is %d\n", globalVar);
    return 0;
}
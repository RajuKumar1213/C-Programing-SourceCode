#include <stdio.h>

int globalVar ;// It will automatically intilized by 0
int myFunc1(int a ,int b){
    auto int sum; 
    sum = a + b ;
    printf("The sum is %d\n", sum);
    return sum;
}
// int main(){
//     // Declaration --> Telling the compilor about the variable (No Space reserved)
//     // Defination --> Declaration + space reservation
    int sum = myFunc1(2, 4);
//     printf("The value of sum is %d \n", sum);   
//     printf("The value of globalVar is %d\n", globalVar);
//     return 0;
// }


#include <stdio.h> 

int main(){
    int a  = 34;
    int *ptr;
    int c = 34;// After this an uninitialize pointer will point to the null 
    if(ptr != NULL){
    printf("The address of a is %d\n", ptr);
    }
    else{
        printf("The pointer is null and cannot be dereferenced");
    }
    return 0;
}
#include <stdio.h> 

int main(){
    int a = 78;
    int *ptr2 = NULL;
    int *ptra = &a;// this will store the value of a                                                                                                     
    printf("The value of a is %d\n", a);//this will print 78
    printf("The address of pointer to a is %d\n", &ptra);
    printf("The value of a is %d\n", *ptra);//this will also print 78
    printf("The address of pointer is %p\n", ptra);

    printf("The hexadecimal address of a is %x\n", ptra);i
    printf("the address of a is %d \n", &a);
    printf("The another way to print the address of a is %d \n", ptra);
    printf("The address of some garbage is %d \n", ptr2);
    return  0;                                                                                                  
}   
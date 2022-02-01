#include <stdio.h>
int a = 34343; // This is the global variable

int returnNum(){
    return 30*2;
}
int func1(int a1)
{
    static int myvar = 0;// this is a static variable which keep the previus value reserve

    static int myvar = ret();// It will give an error of because it cannot initialize like this. We have to initialize it as a constant
    
    printf("The value of my var %d\n", myvar);
    myvar++;
    // printf("The value global variable a in func1 %d\n", a);
    return a1 * 10;
}
int main()
{
    int a = 34; // This is the local variable
    int val = func1(a);
    val = func1(a);
    val = func1(a);
    val = func1(a);
    val = func1(a);
    val = func1(a);
    val = func1(a);
    val = func1(a);
    // printf("The value of the func1 is %d\n",val);
    return 0;
}
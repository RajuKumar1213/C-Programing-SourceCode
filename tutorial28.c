#include <stdio.h> 

int fib_recursive(int n){
    if(n == 1 || n == 2){
        return (n-1);
    }
    else{
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int num){
    int a = 0;
    int b = 1;
    for (int i = 0; i < (num-1); i++)
    {
        b = a+b;
        a = b-a;
    }
    return a;
    
    return 0;
    
}
int main(){
    int num;
    int fib ;

    printf("Enter an index to print the fibonacci series:-");
    scanf("%d", &num);
    printf("the value of fibonacci series at the position of %d By the recursive approach is: %d\n", num,fib_recursive(num));

    printf("the value of fibonacci series at the position of %d by the itrative approach is: %d\n", num,fib_iterative(num));
    return 0;
}
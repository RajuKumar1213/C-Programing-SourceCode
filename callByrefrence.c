 
// this is the quick quiz :
// Given the number a and b, Pass its, adress to a function ,after running the function a shoud asign the sum of both number Simillarly b shoul asign the subtract of both numbers
#include <stdio.h> 
void change(int *a, int *b ){
    int c = *a + *b;
    int d = *a - *b;
    *a = c;
    *b = d;
    return;
}
int main(){
    int a = 4, b = 2;
    printf("%d and %d\n",a ,b);
    change(&a, &b);
    printf("%d And %d\n", a, b);
    
    return 0;
}

#include <stdio.h> 
#include <stdlib.h> 

int main(){
    char a, b;
    int chars , i = 0;
    char* ptr;
    while (i<3){
    printf("Employee %d :Enter the number of character in your employee Id \n", i+1);
    scanf("%d", &chars);
    getchar();
    printf("Enter The value of a\n");
    scanf("%c", &a);
    getchar();
    printf("Enter The value of b\n");
    scanf("%c", &b);
    ptr = (char*)malloc((chars + 1)*sizeof(char));
    printf("Enter the employee id\n");
    scanf("%s", ptr);
    printf("The Entered employee Id is %s\n", ptr);
    i++;
    free(ptr);
    }
    

    return 0;
}
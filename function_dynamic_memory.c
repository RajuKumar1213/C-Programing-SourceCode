#include <stdio.h> 
#include <stdlib.h>

int main(){
    // Use of malloc
    // int n;
    // int* ptr;
    // printf("Enter a number you want to create an array\n");
    // scanf("%d", &n);
    // ptr = (int*) malloc(n*sizeof(int));
    // for(int i=0;i<n;i++){
    //     printf("Enter a number to store at index %d \n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for(int i=0;i<n;i++){
    //     printf("The Entered number at index %d is %d\n", i, ptr[i]);
    // }
    // return 0;

    // Use of calloc
    int n;
    int *ptr;
    printf("Enter a number you want to create an array\n");
    scanf("%d", &n);
    ptr = (int*)calloc(n , sizeof(int));
    for (int  i = 0; i < n; i++)
    {
        printf("Enter a number to store at the %d index of the array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int  i = 0; i < n; i++)
    {
        printf("The Entered number at the %d index of the array is %d\n", i, ptr[i]);
    }
    

    // Use of realloc function 

    printf("Enter a new number you want to create an array\n");
    scanf("%d", &n);
    ptr = (int*)realloc(ptr , n*sizeof(int));
    for (int  i = 0; i < n; i++)
    {
        printf("Enter a number to store at the %d index of the array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int  i = 0; i < n; i++)
    {
        printf("The Entered number at the %d index of the array is %d\n", i, ptr[i]);
    }
    free(ptr);
}
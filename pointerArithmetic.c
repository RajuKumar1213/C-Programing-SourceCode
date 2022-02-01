#include <stdio.h>

int main(){
    // int a = 34;
    // char b = 'R';
    // char *ptrb = &b;
    // int *ptra = &a;
    // printf("%d\n", ptra);     // This will print the address of a
    // printf("%d\n", ptra + 1); // This will add a integer size in the address of a i.e 4
    // printf("%d\n", ptra + 2);
    // printf("%d\n", ptrb);
    // printf("%d\n", ptrb + 2);//character takes 1 byte

    // for (int i = 0; i < 8; i++)
    // {
    // // printf("The Value Element in index %d is %d \n" ,i, arr[i]);
    // // printf("The address of element in index %d is %d\n", i, &arr[i]);
    // }
    int arr[] = {1,2,3,4,5,6,7,8};
    int *arrayPtr = arr;
    printf("The Address of the first Element %d \n" ,&arr[0]);
    printf("The Address of the first Element %d \n" ,arr);
    printf("The Address of the second Element %d \n" ,&arr[1]);
    printf("The Address of the second Element %d \n" ,arr+1);
    // arr++ this line throw an error because this is a constant and we cannot do any thing to this
    arrayPtr++;// we can do any thing to this

    printf("The the value at Address of the first Element %d \n" ,*(&arr[0]));
    printf("The the value at Address of the first Element %d \n" ,*(arr));
    printf("The the value at Address of the first Element %d \n" ,arr[0]);
    printf("The the value at Address of the second Element %d \n" ,*(&arr[1]));
    printf("The the value at Address of the second Element %d \n" ,*(arr+1));
    printf("The the value at Address of the second Element %d \n" ,arr[1]);

    return 0;
}


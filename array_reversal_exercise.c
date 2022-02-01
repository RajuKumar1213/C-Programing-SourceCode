// #include <stdio.h>
// void arrayRev(int *array){
//     printf("THE REVERSE ORDER OF THE ARRAY IS :\n");
//     for (int i = 6; i >= 0; i--)
//     {
//         printf("%d\n",array[i]);
//     }

// }
// int main(){
//     int arr[] = {2,4,5,6,7,89,78};
//         printf("THE NORMAL ORDER OF THE ARRAY IS :\n");
//     for(int i=0;i<7;i++){
//         printf("%d\n", arr[i]);
//     }
//     arrayRev(arr);
//     return 0;
// }

#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void printArray(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The element of the array at intex %d is %d \n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 76, 44};
    printf("\nThe array before the swap function\n");
    printArray(arr);

    arrayRev(arr);
    printf("The array after the swap\n");
    printArray(arr);

    return 0;
}
 //BY DECLARING ARRAY AS THE PARAMETER OF A FUNCTION

// #include <stdio.h> 
// void func1(int array[]){
//     for (int  i = 0; i < 5; i++){
//         printf("The value of the array at index %d is %d\n", i , array[i]);
//     }
//     array[0] = 2323;// If you change here the value of array at any index it gets reflected in the main() function
//     return 0;
// }

// int main(){
//     int arr[] = {2,34,5,56,7,};
//     printf("The value of array at index 0 is %d\n", arr[0]);
//     func1(arr);
//     printf("The value of array at index 0 is %d\n", arr[0]);
//     return 0;
// }



//BY PASSING THE ARRAY'S BASE ADDRESS TO THE FUNCTION

// #include <stdio.h> 
// void func(int *ptr){
//     for (int i = 0; i < 10; i++){
//         printf("%d\n",*(ptr+i)); // or
//         // printf("%d\n", ptr[i]);
//     }
//     *(ptr + 3) = 3434;
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,0};
//      func(arr);
//      func(arr);
//     return 0;
// }

//PASSING 2D ARRAY TO A FUNCTION
#include <stdio.h> 
void func3(int arr[2][4]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of array at %d,%d is %d\n", i , j , arr[i][j]);
        }
        
    }
    
}
int main(){
    int arr[2][4]= {{23,44,66,78},{43,67,88,99}};
    func3(arr);
    return 0;
}

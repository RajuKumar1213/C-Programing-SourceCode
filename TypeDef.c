#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char name[34];
    char fav_char;
} std; // std is the new short structure after typedef

int main()
{
    // std s1, s2;
    // s1.id = 323;
    // s2.id = 434;
    // printf("The id of s1 is %d\n", s1.id);
    // printf("The id of s2 is %d\n", s2.id);

    typedef int *pointer;
    pointer a, b;
    int c = 23;
    int d = 43;
    a = &c;
    b = &d;
    printf("The address of the c is %d\n", *a);
    printf("The address of the d is %d\n", *b);
    // typedef is used to use a coustomised instead of long name
    // typedef unsigned long ul;
    // ul l1, l2 ,l3;

    // // EX 1 :-
    // typedef int integer;
    // integer a = 5;
    // printf("the value of a  is %d", a);

    // LETS CHECK THIS TYPEDEF WITH THE STRUCTURE

    return 0;
}
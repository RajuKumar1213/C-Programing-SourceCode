#include <stdio.h>

void printStar(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void printReverseStar(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int num, type;
    printf("Enter 0 for Star pattern \n");
    printf("Enter 1 for Star pattern \n");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
        printf("How many rows do you want to print?\n");
        scanf("%d", &num);;
        printStar(num);
        break;

    case 1:
        printf("How many rows do you want to print?\n");
        scanf("%d", &num);
        printReverseStar(num);
        break;

    default:
        printf("You have choosed an invalid choice!");
        break;
    }
    return 0;
}
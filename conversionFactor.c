#include <stdio.h>

int main()
{
    char input;

    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float intchesToMeters = 0.0254;
    float first , second;

    while (1)
    { // after giving 1 this while loop it go till the infinite 
        printf("Enter the input character .q to quit\n        1. kms to miles\n        2. inches to foots\n        3. cms to inches\n        4. pound to kgs\n        5. inches to meters\n");

        scanf(" %c", &input);

       
        switch (input)
        {
        case 'q':
            printf("Quiting the program...");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of Kilo Meter to convert into Mile\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f Km is equal to %.2f Mile\n\n\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of Inches to convert into Foot\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%.2f Inch is equal to %.2f Foot\n\n\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of CentiMeter to convert into Inch\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%.2f Cm is equal to %.2f Inch\n\n\n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of Pound to convert into Kg\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%.2f Pound is equal to %.2f Kg\n\n\n", first, second);
            break;

        case '5':
            printf("Enter quantity in terms of Inch to convert into Meter\n");
            scanf("%f", &first);
            second = first * intchesToMeters;
            printf("%.2f Inch is equal to %.2f Meter\n\n\n", first, second);
            break;

    
        default:
            break;
        }
    }
    end:
    return 0;
}

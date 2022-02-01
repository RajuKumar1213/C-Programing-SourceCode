#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // Remove the trailing spaces
    if (string[0] == ' ')
    {
        // shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
}
int main()
{
    char string[] = "<h1>     This is the heading     </h1>";
    parser(string);
    printf("The string is ~~%s~~", string);
    return 0;
}

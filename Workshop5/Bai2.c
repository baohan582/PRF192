#include <stdio.h>
int main()
{
    char str[100];
    int i;
    int length = 0;
    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '\n')
        {
            length = length + 1;
        }
        i = i + 1;
    }
    printf("\nOUTPUT:\n");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
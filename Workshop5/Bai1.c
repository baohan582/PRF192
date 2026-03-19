#include <stdio.h>
int main()
{
    char str[100];   
    int i;           
    int count = 0;   
    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '\n')
        {
            count = count + 1;
        }
        i = i + 1;
    }
    printf("\nOUTPUT:\n");
    printf("%d", count);
    return 0;
}
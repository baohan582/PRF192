#include <stdio.h>
int main()
{
    char str[200];
    int i = 0;
    int count = 0;
    int inWord = 0;
    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            if (inWord == 0)
            {
                count = count + 1;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
        i = i + 1;
    }
    printf("\nOUTPUT:\n");
    printf("%d", count);
    return 0;
}
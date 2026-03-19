#include <stdio.h>
int main()
{
    char str[100];
    int i;
    int j;
    int length = 0;
    int flag = 1;
    printf("INPUT:\n");
    scanf("%s", str);
    i = 0;
    while (str[i] != '\0')
    {
        length = length + 1;
        i = i + 1;
    }
    j = length - 1;
    i = 0;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i = i + 1;
        j = j - 1;
    }
    printf("\nOUTPUT:\n");
    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
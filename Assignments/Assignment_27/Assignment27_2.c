
#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter string : ");
    fgets(Arr, sizeof(Arr), stdin);

    iRet = CountSmall(Arr);

    printf("Number of capital characters are : %d\n", iRet);

    return EXIT_SUCCESS;
}

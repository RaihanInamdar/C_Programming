
#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }

        iCount++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter a string : ");
    fgets(arr, sizeof(arr), stdin);

    printf("Enter the character : ");
    scanf("%c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("First occurrence index is : %d\n", iRet);

    return EXIT_SUCCESS;
}

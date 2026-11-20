#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int i = -1;
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            i = iCount;
        }

        str++;
        iCount++;
    }

    return i;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter a string : ");
    fgets(arr, sizeof(arr), stdin);

    printf("Enter character : ");
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Last occurrence index is : %d\n", iRet);

    return EXIT_SUCCESS;
}

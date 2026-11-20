#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

int CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter string : ");
    fgets(Arr, sizeof(Arr), stdin);

    iRet = CheckVowel(Arr);

    if(iRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

  return EXIT_SUCCESS;
}
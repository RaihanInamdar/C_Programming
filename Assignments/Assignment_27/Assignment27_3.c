#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmall = 0, iCapital = 0, iDiff = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    iDiff = iSmall - iCapital;

    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }

    return iDiff;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter string : ");
    fgets(Arr, sizeof(Arr), stdin);

    iRet = Difference(Arr);

    printf("Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}
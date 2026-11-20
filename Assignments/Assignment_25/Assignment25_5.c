
#include<stdio.h>
#include<stdlib.h>

void DisplayTime(char ch)
{
    char Arr[4] = {'A','B','C','D'};
    int i = 0;

    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    for(i = 0; i < 4; i++)
    {
        if(ch == Arr[i])
        {
            break;
        }
    }

    if(i == 0)
    {
        printf("Your exam at 7 AM\n");
    }
    else if(i == 1)
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(i == 2)
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(i == 3)
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");
    }
}

int main()
{
    char cValue;

    printf("Enter division : ");
    scanf("%c", &cValue);

    DisplayTime(cValue);

    return EXIT_SUCCESS;
}

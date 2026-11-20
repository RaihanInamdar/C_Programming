#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = str;

    while(*str != '\0' && *str != '\n')
    {
        str++;
    }

    while(str > start)
    {
        str--;
        printf("%c", *str);
    }
}

int main()
{
    char Arr[100];

    printf("Enter string : ");
    fgets(Arr, sizeof(Arr), stdin);

    printf("Reverse string is : ");
    Reverse(Arr);

    printf("\n");

    return EXIT_SUCCESS;
}
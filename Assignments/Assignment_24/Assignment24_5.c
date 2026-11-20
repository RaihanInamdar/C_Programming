
#include<stdio.h>
#include<stdlib.h>

void StrRev(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    fgets(arr, sizeof(arr), stdin);

    StrRev(arr);

    printf("Reversed string is : %s\n", arr);

    return EXIT_SUCCESS;
}

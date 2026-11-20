
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal      : %d\n", ch);
    printf("Octal        : %o\n", ch);
    printf("Hexadecimal  : %x\n", ch);
}

int main()
{
    char cValue;

    printf("Enter character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}

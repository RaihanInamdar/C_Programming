
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    printf("Output : %c\n", ch);
}

int main()
{
    char cValue;

    printf("Enter character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}

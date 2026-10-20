#include<stdio.h>
#include<stdlib.h>

void CheckCharecterType(char cValue)
{
  if(cValue >= 'a' && cValue <='z')
  {
    printf("Lowercase Alphabet\n");
  }
  else if(cValue >= 'A' && cValue<='Z')
  {
    printf("Uppercase Alphabet\n");
  }
  else if(cValue >= '0' && cValue<='9')
  {
    printf("Digit\n");
  }
  else
  {
    printf("Special character\n");
  }
}

int main()
{
  char CValue = '\0';

  printf("Enter a character: ");
  scanf("%c",&CValue);

  CheckCharecterType(CValue);
  return EXIT_SUCCESS;
}
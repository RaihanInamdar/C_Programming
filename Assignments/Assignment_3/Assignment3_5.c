#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkvowel(char cValue)
{
  if(cValue == 'a','e','i','o','u','A','E','I','O','U')
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  char CValue;
  bool bRet = false;

  printf("Enter Character: ");
  scanf("%c",&CValue);

  bRet = checkvowel(CValue);

  if(bRet = true)
  {
    printf("Character is a vowel ");
  }
  else
  {
    printf("Character is not a vowel");
  }

  return EXIT_SUCCESS;


}


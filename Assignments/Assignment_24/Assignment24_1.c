#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkChar(char *str , char ch)
{
  while(*str != '\0')
  {
    if(*str == ch)
    {
      return true;
    }
    str++;
  }
  return false;
}
int main()
{
  char arr[20];
  char cValue;
  bool bRet = false;

  printf("Enter a string : ");
  fgets(arr , sizeof(arr) , stdin);

  printf("Enter the character : ");
  scanf("%c",&cValue);

  bRet = ChkChar(arr , cValue);

  if(bRet == true)
  {
    printf("Character found %c",cValue);
  }
  else
  {
    printf("Character not found ");
  }
  return EXIT_SUCCESS;
}
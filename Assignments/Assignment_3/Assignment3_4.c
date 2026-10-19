#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
  if(cValue >= 'a' && cValue <= 'z')
  {
    printf("%c", cValue - 32);
  }
  else if(cValue >= 'A' && cValue <= 'Z')
  {
    printf("%c", cValue + 32);
  }
}

int main()
{
  int CValue;

  printf("ENTER A CHARACTER: ");
  scanf("%c",&CValue);

  DisplayConvert(CValue);

}
#include<stdio.h>
#include<stdlib.h>
void DisplayDigits(char *str)
{
  while(*str != '\0')
  {
    if(*str >= '0' && *str <= '9')
    {
      printf("%c", *str);
    }
    str++;
  }
}
int main()
{
  char Arr[100];
  printf("Enter a string : ");
  fgets(Arr , sizeof(Arr) , stdin);

  DisplayDigits(Arr);

  return EXIT_SUCCESS;
}
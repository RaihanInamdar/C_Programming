#include<stdio.h>
#include<stdlib.h>
void strtogglex(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'A' && *str <= 'Z')
    {
      *str = *str + 32;
    }
    else if(*str >= 'a' && *str <= 'z')
    {
      *str = *str - 32;
    }
    str++;
  }
}
int main()
{
  char Arr[100];
  printf("Enter a string : ");
  fgets(Arr , sizeof(Arr) , stdin);

  strtogglex(Arr);
  printf("Converted string is : %s", Arr);

  return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>
void strlwrx(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'A' && *str <= 'Z')
    {
      *str = *str + 32;
    }
    str++;
  }
}
int main()
{
  char Arr[100];
  printf("Enter string : ");
  fgets(Arr , sizeof(Arr) , stdin);

  strlwrx(Arr);
  printf("Lower case is : %s", Arr);


  return EXIT_SUCCESS;
}
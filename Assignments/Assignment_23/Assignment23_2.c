#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
  while(*str != '\0')
  {
    if(*str >= 'a' && *str <='z')
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

  struprx(Arr);
  printf("Uperr case id : %s" , Arr);

  return EXIT_SUCCESS;
}
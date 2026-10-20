#include<stdio.h>
#include<stdlib.h>

void CheckLeepYear(int iNo)
{
  if ((iNo % 400) == 0 || ((iNo % 4) == 0 && (iNo % 100) != 0))
  {
    printf("It is a leep year");
  }
  else
  {
    printf("It is not a leep year");
  }
}
int main()
{
  int iValue = 0;

  printf("Enter a year: ");
  if(scanf("%d",&iValue) !=1 || (iValue <= 0 ))
  {
    printf("Invalid !!");
    return EXIT_FAILURE;
  }
  CheckLeepYear(iValue);
  return EXIT_SUCCESS;
}
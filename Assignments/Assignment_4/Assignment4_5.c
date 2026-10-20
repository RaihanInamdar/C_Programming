#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
  if((iNo % 5 ) == 0)
  {
    printf("Divisible by 5");
  }
  else
  {
    printf("Not Divisible by 5");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter Number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input !!");
    return EXIT_FAILURE;
  }

  CheckDivisibility(iValue);

  return EXIT_SUCCESS;

}
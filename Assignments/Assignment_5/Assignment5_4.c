#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{ 
  if (((iNo % 3) == 0) && ((iNo % 5) == 0))
  {
    printf("Number is divisible by both 3 and 5\n");
  }
  else if (((iNo % 3) == 0))
  {
    printf("number is divisible by 3 \n");

  }
  else if (((iNo % 5) == 0))
  {
    printf("number is divisible by 5\n "); 
  }
  else
  {
    printf("Not divisible by both\n");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter a number: ");
  if(scanf("%d",&iValue) !=1 )
  {
    printf("Invalid !!");
    return EXIT_FAILURE;
  }
  CheckMultipleDivisibility(iValue);
  return EXIT_SUCCESS;
}


#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  if(iNo == 0)
  {
    printf("ZERO");
  }
  else if(iNo == 1)
  {
    printf("ONE");
  }
  else if(iNo == 2)
  {
    printf("TWO");
  }
  else if(iNo == 3)
  {
    printf("THREE");
  }
  else if(iNo == 4)
  {
    printf("FOUR");
  }
  else if(iNo == 5)
  {
    printf("FIVE");
  }
  else if(iNo == 6)
  {
    printf("SIX");
  }
  else if(iNo == 7)
  {
    printf("SEVEN");
  }
  else if(iNo == 8)
  {
    printf("EIGHT");
  }
  else if(iNo == 9)
  {
    printf("NINE");
  }
  else
  {
    printf("INVALID INPUT!!");
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number(0 - 9) : \n");
  if((scanf("%d",&iValue)) != 1)
  {
    printf("Invalid input!!!");
    return EXIT_FAILURE;
  }
  Display(iValue);

  return EXIT_SUCCESS;
}
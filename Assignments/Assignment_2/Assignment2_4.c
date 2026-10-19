
#include<stdio.h>
#include<stdlib.h>

void display(int iNo, int iFrequency)
{
  int iCnt = 0;

  for(iCnt = 0; iCnt<iFrequency; iCnt ++)
  {
    printf("%d\t",iNo);
  }

}

int main()
{
  int iValue = 0;
  int iCount = 0;

  printf("Enter Number: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }

  printf("Enter the number of time you want to repeat: ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }

  if(iCount < 0)
  {
    iCount = -iCount;
  }

  display(iValue, iCount);

  return EXIT_SUCCESS;
}
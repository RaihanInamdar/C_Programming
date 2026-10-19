#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
  int iCnt = 0;
  if(iNo <= 0)
  {
    iNo = -iNo;
  }
  iCnt = 1;
  while(iCnt <= iNo)
  {
      printf("%d\t",iCnt*2);
      iCnt++;
     
  }
}

int main()
{
  int iValue = 0;

  printf("Enter the number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input !!!");
  }


  PrintEven(iValue);

  return EXIT_SUCCESS;
}
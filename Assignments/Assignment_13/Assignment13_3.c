#include<stdio.h>
#include<stdlib.h>
int CountRange(int iNo)
{
  int iDigit = 0, iCount = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit>3 && iDigit <7)
    {
      iCount++;
    }
    iNo = iNo / 10;
  }
  return iCount;
}
int main()
{
  int iValue = 0, iRet = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  iRet = CountRange(iValue);
  printf("Frequency of numbers between 3 and 7 is : %d",iRet);

  return EXIT_SUCCESS;
}
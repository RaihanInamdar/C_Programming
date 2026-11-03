#include<stdio.h>
#include<stdlib.h>
void DisplayDigit(int iNo)
{
  int iDigit = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo /10;
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number : ");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input!!!!");
    return EXIT_FAILURE;
  }
  DisplayDigit(iValue);
  return EXIT_SUCCESS;
}
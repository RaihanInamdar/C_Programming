#include<stdio.h>
#include<stdlib.h>
void Table(int iNo)
{
  int iCnt = 0, iMul = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
  {
    iMul = iNo * iCnt;
    printf("%d\t",iMul);
  }
  
}
int main()
{
  int iValue = 0;
  printf("Enter the number : \n");
  if(scanf("%d",&iValue)!= 1)
  {
    printf("Invalid input!!!");
    return EXIT_FAILURE;
  }
  Table(iValue);
  return EXIT_SUCCESS;
}
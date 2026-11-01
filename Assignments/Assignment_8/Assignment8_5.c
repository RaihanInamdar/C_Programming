#include<stdio.h>
#include<stdlib.h>
void TableRev(int iNo)
{
  int iCnt = 0, iMul = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 10 ; iCnt >= 1; iCnt--)
  {
    iMul = iNo * iCnt;
    printf("%d\t",iMul);
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number : \n");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  TableRev(iValue);
  return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>
void RangeDisplayEven(int iStart , int iEnd)
{
  int iCnt = 0;
  if(iEnd < iStart)
  {
    printf("Invalid Input!!!");
    return -1;
  }
  for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
  {
    if((iCnt % 2) == 0)
    {
      printf("%d\t",iCnt);
    }
  }
}
int main()
{
  int iValue1 = 0, iValue2 = 0;
  printf("Enter Starting point : ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid input!!");
    return EXIT_FAILURE;
  }
  printf("Enter Ending point : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid input!!");
    return EXIT_FAILURE;
  }

  RangeDisplayEven(iValue1 , iValue2);
  return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>
void RangeDisplayRev(int iStart , int iEnd)
{
  int iCnt = 0;
  for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
  {
    printf("%d\t",iCnt);
  }
}
int main()
{
  int iValue1 = 0 , iValue2 = 0; 
  printf("Enter Starting Point : ");
  if(scanf("%d", &iValue1) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  printf("Enter Starting Point : ");
  if(scanf("%d", &iValue2) != 1)
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE;
  }
  if(iValue1 > iValue2)
  {
    printf("Invalid Range!!");
    return EXIT_FAILURE;
  }
    
  RangeDisplayRev(iValue1 , iValue2);
  return EXIT_SUCCESS;
}
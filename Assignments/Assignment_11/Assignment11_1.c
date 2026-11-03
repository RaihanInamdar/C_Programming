#include<stdio.h>
#include<stdlib.h>
void RangeDisplay(int iStart , int iEnd)
{
  int iCnt = 0;
  if(iEnd < iStart)
  {
    printf("Invalid Input!!!");
    return;
  }
  for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
  {
    printf("%d\t",iCnt);
  }
}
int main()
{
  int iValue1 = 0 ,iValue2 = 0;

  printf("Enter start number of the range : ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid input!!!");
    return EXIT_FAILURE;
  }

  printf("Enter end number of the range : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid input!!!");
    return EXIT_FAILURE;
  }
  RangeDisplay(iValue1, iValue2);

  return EXIT_SUCCESS;
}
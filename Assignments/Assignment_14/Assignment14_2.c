#include<stdio.h>
#include<stdlib.h>
void FactRev(int iNo)
{
  int iCnt = 0;
  for(iCnt = iNo/2 ; iCnt >=1 ; iCnt--)
  {
    if((iNo % iCnt) == 0)
    {
      printf("%d\t",iCnt);
    }
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
  FactRev(iValue);
  return EXIT_SUCCESS;
}
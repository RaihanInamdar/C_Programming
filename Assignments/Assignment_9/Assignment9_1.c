#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
  int iCnt = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
  {
    printf("*\t");
  }
  for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
  {
    printf("#\t");
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number : \n");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input!!!!");
    return EXIT_FAILURE;
  }

  Display(iValue);
  return EXIT_SUCCESS;

}
#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
  int iCnt = 0;
  for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
  {
    printf("%d\t", iCnt);
  }
}
int main()
{
  int iValue = 0;
  printf("Enter a number : \n");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid Input!!!!");
    return EXIT_FAILURE;
  }

  Display(iValue);
  return EXIT_SUCCESS;
}

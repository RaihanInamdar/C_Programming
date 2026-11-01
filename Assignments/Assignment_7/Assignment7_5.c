#include<stdio.h>
#include<stdlib.h>
void MultipleDisplay(int iNo)
{
  int iCnt = 0, mul = 0;
  for (iCnt = 1 ; iCnt <=5 ; iCnt++)
  {
    mul = iNo * iCnt;
    printf("%d\t" , mul);
  } 
}
int main()
{
  int iValue = 0;

  printf("Enter a number: \n");
  if(scanf("%d",&iValue) != 1)
  {
    printf("Invalid input!!!");
    return EXIT_FAILURE;
  }
  MultipleDisplay(iValue);
  return EXIT_SUCCESS;
}
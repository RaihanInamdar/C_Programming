#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iNo1 , int iNo2 , int iNo3)
{  
  if(((iNo1 + iNo2) > iNo3) && ((iNo1 + iNo3) > iNo2) && ((iNo2 + iNo3) > iNo1))
  {
    printf("valid triangle");
  }
  else
  {
    printf("InValid triangle");
  }
}
int main()
{
  int iSide1 = 0 , iSide2 = 0 , iSide3 = 0 ;

  printf("Enter first side: ");
  if((scanf("%d",&iSide1) != 1) || (iSide1 <= 0))
  {
    printf("Invalid Input !!");
    return EXIT_FAILURE;
  }

  printf("Enter second side: ");
  if((scanf("%d",&iSide2) != 1) || (iSide2 <= 0))
  {
    printf("Invalid Input !!");
    return EXIT_FAILURE;
  }

   printf("Enter third side: ");
  if((scanf("%d",&iSide3) != 1) || (iSide1 <= 0))
  {
    printf("Invalid Input !!");
    return EXIT_FAILURE;
  }

  CheckTriangle(iSide1, iSide2, iSide3);
  return EXIT_SUCCESS;

}
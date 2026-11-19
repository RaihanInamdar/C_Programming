#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow , int iCol)
{
  int i = 0 , j = 0;
  char ch1 = '\0', ch2= '\0';

  for(i = 1 ; i<= iRow ; i++)
  {
    for(j= 1 , ch1 = 'A' , ch2 ='a'; j<= iCol; j++ , ch1++ , ch2++)
    {
      if(i % 2 == 0)
      {
        printf("%c\t",ch2);
      }
      else
      {
        printf("%c\t",ch1);
      }
    }
    printf("\n\n");
  }
}
int main()
{
  int iValue1 = 0 , iValue2 = 0;
  printf("Enter number of row : ");
  if(scanf("%d",&iValue1) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  } 

  printf("Enter number of Coloum : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  } 
  Pattern(iValue1 , iValue2);

  return EXIT_SUCCESS;
}
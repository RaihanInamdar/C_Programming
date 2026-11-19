#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow , int iCol)
{
  int i = 0 , j = 0;
  for(i = 1 ; i <= iRow ; i++)
  {
    for(j = 1 ; j <= iCol ; j++)
    {
      if(i <= j )
      {
        printf("%d\t",j);
      }
      else
      {
        printf(" \t");
      }
    }
    printf("\n\n");
  }
}
int main()
{
  int iValue1 = 0 , iValue2 = 0 ;
  printf("Enter num if rows : ");
  if((scanf("%d",&iValue1) != 1) || (iValue1 <= 0))
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE ; 
  }

  printf("Enter num if column : ");
  if((scanf("%d",&iValue2) != 1) || (iValue2 <= 0))
  {
    printf("Invalid Input!!");
    return EXIT_FAILURE ; 
  }
  Pattern(iValue1 , iValue2);
  return EXIT_SUCCESS;
}

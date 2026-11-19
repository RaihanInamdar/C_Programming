#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow , int iCol)
{
  int i = 0, j = 0;
  char ch = '\0'; 
  for(i = 1 , ch = 'A' ; i <= iRow ; i++ , ch++)
  {
    for (j=1 ; j<=iCol ; j++)
    {
      printf("%c\t",ch);
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

  printf("Enter number of Column : ");
  if(scanf("%d",&iValue2) != 1)
  {
    printf("Invalid Input!!!");
    return EXIT_FAILURE;
  }
  Pattern(iValue1 , iValue2);

  return EXIT_SUCCESS;
}
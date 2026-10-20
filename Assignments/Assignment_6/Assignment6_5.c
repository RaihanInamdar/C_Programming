#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary , int iYears)
{
  float fBonus = 0.0f;
  if( iYears > 10 )
  {
    fBonus = (fSalary * 15 / 100);
  }
  else if(iYears > 5)
  {
    fBonus = (fSalary * 10 / 100);
  }
  else
  {
    fBonus = (fSalary * 5 / 100);
  }
  printf("Bonus =  %.2f\n",fBonus);
}

int main()
{
  float FSalary = 0.0f;
  int IYears = 0;

  printf("Enter your salary: ");
  if((scanf("%f",&FSalary) != 1) || (FSalary <= 0))
  {
    printf("Invalid input!!\n");
    return EXIT_FAILURE;
  }

  printf("Enter your Years of service in the company: ");
  if((scanf("%d",&IYears) != 1) || (IYears < 0))
  {
    printf("Invalid input!!\n");
    return EXIT_FAILURE;
  }

  CalculateBonus(FSalary, IYears);

  return EXIT_SUCCESS;


}
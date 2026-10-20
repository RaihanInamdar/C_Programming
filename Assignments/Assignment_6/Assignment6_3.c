#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
  if(fAmount < 0)
  {
    printf("Invalid input !!");
    return;
    
  }
  else if(fAmount < 1000)
  {
    fAmount = fAmount;
  }
  else if (fAmount < 5000)
  {
    fAmount = fAmount - (fAmount * 10 / 100);
  }
  else
  {
    fAmount = fAmount - ( fAmount * 20 / 100);
  }
  printf("Payable amount = %.2f",fAmount);
}

int main()
{
  float FAmount = 0.0f;

  printf("Enter amount: ");
  if(scanf("%f",&FAmount) != 1)
  {
    printf("Invalid input!!");
    return EXIT_FAILURE;
  }
  CalculateDiscount(FAmount);

  return EXIT_SUCCESS;
}
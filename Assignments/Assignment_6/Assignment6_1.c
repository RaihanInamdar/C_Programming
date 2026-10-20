#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
  float fBill;
  if(iUnits<0)
  {
    printf("Invalid input!!");
  }
  else if(iUnits <=100)
  {
    fBill = (iUnits *5.0f);
  }
  else if(iUnits <=200)
  {
    fBill = (100 *5.0f) + ((iUnits - 100) * 7.0f);
  }
  else
  {
    fBill = (100 *5.0f) + (100 * 7.0f) + ((iUnits - 200)*10.0f);
  }
  printf("Bill = %.2f",fBill);

}

int main()
{
  int IUnits = 0;

  printf("Enter the unites of electricity: ");
  scanf("%d",&IUnits);

  CalculateElectricityBill(IUnits);

  return EXIT_SUCCESS;
}
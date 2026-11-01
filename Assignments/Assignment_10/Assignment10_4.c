#include<stdio.h>
#include<stdlib.h>
double FhtoCs(float fTemp)
{
  double dcelsius = 0.0;
  dcelsius = (fTemp - 32) * (5.0/9.0);
  return dcelsius;  
}
int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;

  printf("Enter temperature in fahremheit: ");
  scanf("%f",&fValue);

  dRet = FhtoCs(fValue);
  printf("Temperature in celcius is : %lf", dRet);


  return EXIT_SUCCESS;
}
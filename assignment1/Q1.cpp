#include <iostream>
#include <math.h>

using namespace std;

double fixedAnnuity(int peroids, double paymentAmount, double interestRate)
{
  double total = 0;

  for (int i = 1; i <= peroids; i++)
  {
    double denominator = pow((1.0 + interestRate), i);
    total += (paymentAmount / denominator);
  };

  return total;
}

double growingAnnuity(int peroids, double paymentAmount, double interestRate, double paymentGrowthRate)
{
  double total = 0;

  for (int i = 1; i <= peroids; i++)
  {

    double numerator = paymentAmount * pow((1 + paymentGrowthRate), i - 1);
    double denominator = pow(1 + interestRate, i);

    total += (numerator / denominator);
  };

  return total;
}

int main(int argc, char const *argv[])
{
  double fixedAnnuityTotal = fixedAnnuity(25, 40, 0.03);
  printf("fixed annuity present value  = %f \n", fixedAnnuityTotal);

  double growingAnnuityTotal = growingAnnuity(10, 80, 0.03, 0.005);
  printf("gowing annuity present value  = %f \n", growingAnnuityTotal);

  string greatestAnnuity = (fixedAnnuityTotal > growingAnnuityTotal) ? "fixed annuity" : "growing annuity";
  string outString = greatestAnnuity + " is the best annuity";
  printf("%s", outString.c_str());
}

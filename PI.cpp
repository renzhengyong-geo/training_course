#include "PI.h"
#include <cmath>


double PI::factorial(int n)
{
  return std::tgamma(n+1);
}

double PI::fixed_constant_value()
{
  double temp=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430;
  return temp;
}


double PI::Gregory_Leibniz()
{
  double temp=0.;
  for(int k=1; k<500000; k++)
    temp+= std::pow(-1,k+1)/(2*k-1);
  temp = temp*4.0;
  return temp;
}

double PI::Srinivasa_Ramanujan()
{
  double temp=0.;
  for(int n=0; n<10; n++)
    temp+= factorial(4*n)*(1103+26390*n)/(std::pow(factorial(n),4)*std::pow(396,4*n));
  temp*= 2*std::sqrt(2)/9801;
  return 1.0/temp;

}

double PI::Abraham_Sharp_formulas()
{
	int n = 10000;
	double PI_value;
	PI_value = 0.;
	int sign = -1;
	for (int i = 0; i < n; i++)
	{
		sign *= -1;
		PI_value = PI_value + (sign * 2 * powf(3, 0.5 - i)) / (2 * i + 1);
	}
	
	return PI_value;
}

double PI::MachinFormula()
{
  double temp= 16*atan(1/5.0) - 4*atan(1/239.0) ;
  return temp;
}


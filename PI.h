
#ifndef _PI_H
#define _PI_H


#include <vector>
#include <iostream>

class PI
{
 public:
  PI() { cicular_constant=0.;} 
  ~PI() {}; 

  double fixed_constant_value();
  double Gregory_Leibniz();
  double Srinivasa_Ramanujan ();
  double Abraham_Sharp_formulas();
  double MachinFormula();
  double Newton_formula();

  
  double factorial(int n);  
  private:
  double cicular_constant;
};

#endif //_PI_H




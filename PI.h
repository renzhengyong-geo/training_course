
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
  double Abraham_Sharp_formulas();
  double Gregory_Leibniz_formula();
  
  private:
  double cicular_constant;
};

#endif //_PI_H




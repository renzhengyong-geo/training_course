
#ifndef _PI_H
#define _PI_H


#include <vector>
#include <iostream>

class PI
{
 public:
  PI() { cicular_constant=0.;} 
  ~PI() {}; 

  // double fixed_constant_value();
  double MachinFormula();
  
  private:
  double cicular_constant;
};

#endif //_PI_H


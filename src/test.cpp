#include <iostream>
#include "PI.h"

int main()
{
   PI pi;
   pi.Gregory_Leibniz_formula();
   std::cout << "pi = " << pi.circular_constant << "\n";
   return 0;
}
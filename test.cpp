#include "PI.h"
#include <iostream>


int main()
{
    // return the fixed value of PI;
    class PI piclass;
    double value = piclass.fixed_constant_value();
    std::cout.precision(50);
    std::cout<<"fixed constant value:\t"<<value<<"\n";
	
	value = piclass.Abraham_Sharp_formulas();
	std::cout.precision(50);
    std::cout<<"Abraham Sharp formulas value:\t"<<value<<"\n";

    value = piclass.Gregory_Leibniz_formula();
	std::cout.precision(50);
    std::cout<<"Gregory Leibniz formula value:\t"<<value<<"\n";
   
    return 0;
}
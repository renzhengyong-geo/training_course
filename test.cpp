#include "PI.h"
#include <iostream>


int main()
{
    // return the fixed value of PI;
    class PI piclass;
    double value = piclass.fixed_constant_value();
    std::cout.precision(50);
    std::cout<<"fixed constant value:\t"<<value<<"\n";
    return 0;
}
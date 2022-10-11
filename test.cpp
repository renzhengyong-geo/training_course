#include "PI.h"
#include <iostream>

int main()
{
    class PI piclass;

    // return the fixed value of PI;
    double value = piclass.fixed_constant_value();
    std::cout.precision(50);
    std::cout<<"fixed constant value:\t"<<value<<"\n";

    // return the Gregory and Leibniz value of PI;
    value = piclass.Gregory_Leibniz();
    std::cout.precision(50);
    std::cout<<"fixed constant value:\t"<<value<<"\n";

    // return the Ramanuja value of PI;
    value = piclass.Srinivasa_Ramanujan();
    std::cout.precision(50);
    std::cout<<"fixed constant value:\t"<<value<<"\n";

    return 0;
}
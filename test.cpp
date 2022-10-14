#include "PI.h"
#include <iostream>


int main()
{
    // return the fixed value of PI;
    class PI piclass;
    double value = piclass.MachinFormula();
    std::cout.precision(50);
    std::cout<<"Pi_MachinFormula:\t"<<value<<"\n";
    return 0;
}

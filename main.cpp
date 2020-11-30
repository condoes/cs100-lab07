#include <iostream>
#include "lab-04---composite-pattern-cdo032-galva041-lab4/add.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Mult.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/sub.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/op.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/pow.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/base.hpp"

using namespace std;

int main (int argc, char ** argv) {

    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);

    cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    return 0;


    return 0;
}
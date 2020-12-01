#include <iostream>
#include "lab-04---composite-pattern-cdo032-galva041-lab4/add.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Mult.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/sub.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/op.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/pow.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/base.hpp"
#include "factory.hpp"

using namespace std;

int main (int argc, char ** argv) {

    Factory* fact = new Factory();
    Base* temp = fact->parse(argv, argc);
    cout << temp->stringify() << " = " << temp->evaluate() << endl;

    return 0;
}
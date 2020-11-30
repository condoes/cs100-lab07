#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__
#include <vector>
#include "lab-04---composite-pattern-cdo032-galva041-lab4/add.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Mult.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/sub.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/op.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/pow.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/base.hpp"


class Factory {
    private:
    std::vector<char*> operands;
    std::vector<char*> operations;

    public:
    Base* parse(char** input, int length);
};




#endif
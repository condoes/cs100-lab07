#ifndef _factory_hpp_
#define _factory_hpp_

#include "lab-04---composite-pattern-cdo032-galva041-lab4/add.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Mult.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/sub.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/op.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/pow.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/base.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Div.hpp"
#include <vector>

class Factory {
    public:
        Base* parse(char** input, int length);
};

#endif //_factory_hpp_
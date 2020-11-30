#include <iostream>
#include <vector>
#include "factory.hpp"

Base* Factory::parse(char** input, int length) {
    for(int i = 0; i < length - 1; i++) {
        if(*input[i] >= '0'  &&  *input[i] <= '9') {
            operands.push_back(input[i]);
        }

        else if(*input[i] == '+' || *input[i] == '-' || *input[i] == '*'
        || *input[i] == '/') {
            operations.push_back(input[i]);
        }

        
    }

   
}
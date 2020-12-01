#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <string.h>
#include "factory.hpp"

Base* Factory::parse(char** input, int length) {
    if(length == 1) {
        return nullptr;
    }

    Base *root = new Op(std::stod(input[1]));
    for(unsigned int i = 2; i < length; i++) {
        if(!isdigit(*input[i])) {
            Base *temp;
            if(strcmp(input[i], "**") == 0) {
                temp = new Pow(root, new Op(std::stod(input[i + 1])));
            }
            else if(strcmp(input[i], "*") == 0) {
                temp = new Mult(root, new Op(std::stod(input[i + 1])));
            }
            else if(strcmp(input[i], "/") == 0) {
                temp = new Div(root, new Op(std::stod(input[i + 1])));
            }
            else if(strcmp(input[i], "-") == 0) {
                temp = new Sub(root, new Op(std::stod(input[i + 1])));
            }
            else if(strcmp(input[i], "+") == 0) {
                temp = new Add(root, new Op(std::stod(input[i + 1])));
            }
            root = temp;
        }   
    }  
    return root;

}
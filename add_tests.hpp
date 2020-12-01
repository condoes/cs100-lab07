#ifndef __ADD_TESTS_HPP__
#define __ADD_TESTS_HPP__

#include "gtest/gtest.h"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/add.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/base.hpp"
#include "factory.hpp"

TEST(AddTest, AddNonZeros) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "8"; testVal[2] = "+"; testVal[3] = "3";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "8.000000 + 3.000000");
    EXPECT_EQ(temp->evaluate(), 11);
}

TEST(AddTest, AddZeros) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "0"; testVal[2] = "+"; testVal[3] = "0";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "0.000000 + 0.000000");
    EXPECT_EQ(temp->evaluate(), 0);
}

TEST(AddTest, AddTwoNegs) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "-4"; testVal[2] = "+"; testVal[3] = "-5";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "-4.000000 + -5.000000");
    EXPECT_EQ(temp->evaluate(), -9);
}

TEST(AddTest, AddOneNeg) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "-3"; testVal[2] = "+"; testVal[3] = "10";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "-3.000000 + 10.000000");
    EXPECT_EQ(temp->evaluate(), 7);
}

TEST(AddTest, AddLargNums) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "20"; testVal[2] = "+"; testVal[3] = "45";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "20.000000 + 45.000000");
    EXPECT_EQ(temp->evaluate(), 65);
}

TEST(AddTest, AddNull) {
    char * testVal[1];testVal[0] = "./test";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 1);
    EXPECT_EQ(temp, nullptr);
}



#endif
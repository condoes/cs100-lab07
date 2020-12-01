#ifndef __SUB_TESTS_HPP__
#define __SUB_TESTS_HPP__

#include "gtest/gtest.h"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/sub.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/base.hpp"
#include "factory.hpp"


TEST(SubTest, SubZero) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "0"; testVal[2] = "-"; testVal[3] = "0";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "0.000000 - 0.000000");
    EXPECT_EQ(temp->evaluate(), 0);
}

TEST(SubTest, SubPos) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "10"; testVal[2] = "-"; testVal[3] = "4";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "10.000000 - 4.000000");
    EXPECT_EQ(temp->evaluate(), 6);
}

TEST(SubTest, SubTwoNegs) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "-4"; testVal[2] = "-"; testVal[3] = "-7";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "-4.000000 - -7.000000");
    EXPECT_EQ(temp->evaluate(), 3);
}

TEST(SubTest, SubOneNeg) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "-8"; testVal[2] = "-"; testVal[3] = "3";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "-8.000000 - 3.000000");
    EXPECT_EQ(temp->evaluate(), -11);
}

TEST(SubTest, SubBigNums) {
    char * testVal[4];testVal[0] = "./test"; testVal[1] = "64"; testVal[2] = "-"; testVal[3] = "22";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 4);
    EXPECT_EQ(temp->stringify(), "64.000000 - 22.000000");
    EXPECT_EQ(temp->evaluate(), 42);
}

TEST(SubTest, SubNull) {
    char * testVal[1];testVal[0] = "./test";
    
    Factory * f = new Factory();
    Base* temp = f->parse(testVal, 1);
    EXPECT_EQ(temp, nullptr);
}







#endif

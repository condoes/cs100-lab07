#include "factory.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Mult.hpp"
#include "gtest/gtest.h"

TEST(MultTest, twelve) {
    char* test_val[4];  
    test_val[0] = "./test"; 
    test_val[1] = "6";
    test_val[2] = "\*"; 
    test_val[3] = "2";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val, 4);
    EXPECT_EQ(ans->stringify(), "6.000000 * 2.000000");
    EXPECT_EQ(ans->evaluate(), 12);
}

TEST(MultTest, negative) {
    char* test_val[4]; 
    test_val[0] = "./test"; 
    test_val[1] = "6";
    test_val[2] = "\*"; 
    test_val[3] = "-2";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val, 4);
    EXPECT_EQ(ans->stringify(), "6.000000 * -2.000000");
    EXPECT_EQ(ans->evaluate(), -12);
}

TEST(MultTest, multiDigit) {
    char* test_val[4]; test_val[0] = "./test"; test_val[1] = "100"; 
    test_val[2] = "\*"; test_val[3] = "-2";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val, 4);
    EXPECT_EQ(ans->stringify(), "100.000000 * -2.000000");
    EXPECT_EQ(ans->evaluate(), -200);
}

TEST(MultTest, zero) {
    char* test_val[4]; test_val[0] = "./test"; test_val[1] = "0"; 
    test_val[2] = "\*"; test_val[3] = "0";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val, 4);
    EXPECT_EQ(ans->stringify(), "0.000000 * 0.000000");
    EXPECT_EQ(ans->evaluate(), 0);
}
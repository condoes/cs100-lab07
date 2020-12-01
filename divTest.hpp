#include "factory.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Mult.hpp"
#include "gtest/gtest.h"

TEST(DivTest, three) {
    char* test_val2[4];  
    test_val2[0] = "./test"; 
    test_val2[1] = "6";
    test_val2[2] = "/"; 
    test_val2[3] = "2";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "6.000000 / 2.000000");
    EXPECT_EQ(ans->evaluate(), 3);
}

TEST(DivTest, negative) {
    char* test_val2[4]; 
    test_val2[0] = "./test"; 
    test_val2[1] = "6";
    test_val2[2] = "/"; 
    test_val2[3] = "-2";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "6.000000 / -2.000000");
    EXPECT_EQ(ans->evaluate(), -3);
}

TEST(DivTest, zero) {
    char* test_val2[4]; test_val2[0] = "./test"; test_val2[1] = "0"; 
    test_val2[2] = "/"; test_val2[3] = "1";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "0.000000 / 1.000000");
    EXPECT_EQ(ans->evaluate(), 0);
}

TEST(DivTest, multiDigit) {
    char* test_val2[4]; test_val2[0] = "./test"; test_val2[1] = "100"; 
    test_val2[2] = "/"; test_val2[3] = "-2";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "100.000000 / -2.000000");
    EXPECT_EQ(ans->evaluate(), -50);
}
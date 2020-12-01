#include "factory.hpp"
#include "lab-04---composite-pattern-cdo032-galva041-lab4/Pow.hpp"
#include "gtest/gtest.h"

TEST(PowTest, twentySeven) {
    char* test_val2[4];  
    test_val2[0] = "./test"; 
    test_val2[1] = "3";
    test_val2[2] = "\*\*"; 
    test_val2[3] = "3";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "3.000000 ** 3.000000");
    EXPECT_EQ(ans->evaluate(), 27);
}

TEST(PowTest, negative) {
    char* test_val2[4]; 
    test_val2[0] = "./test"; 
    test_val2[1] = "-6";
    test_val2[2] = "\*\*"; 
    test_val2[3] = "4";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "-6.000000 ** 4.000000");
    EXPECT_EQ(ans->evaluate(), 1296);
}

TEST(PowTest, zero) {
    char* test_val2[4]; test_val2[0] = "./test"; test_val2[1] = "0"; 
    test_val2[2] = "\*\*"; test_val2[3] = "1";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "0.000000 ** 1.000000");
    EXPECT_EQ(ans->evaluate(), 0);
}

TEST(PowTest, multiDigit) {
    char* test_val2[4]; test_val2[0] = "./test"; test_val2[1] = "10"; 
    test_val2[2] = "\*\*"; test_val2[3] = "2";
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 4);
    EXPECT_EQ(ans->stringify(), "10.000000 ** 2.000000");
    EXPECT_EQ(ans->evaluate(), 100);
}
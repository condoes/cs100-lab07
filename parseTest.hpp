#include "factory.hpp"
#include "gtest/gtest.h"

TEST(ParseTest, null) {
    char* test_val2[1];  
    test_val2[0] = "./test"; 
    Factory* calc = new Factory();
    Base* ans = calc->parse(test_val2, 1);
    EXPECT_EQ(ans, nullptr);
}
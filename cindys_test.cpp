#include "gtest/gtest.h"
#include "add_tests.hpp"
#include "sub_tests.hpp"
#include "factory.hpp"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


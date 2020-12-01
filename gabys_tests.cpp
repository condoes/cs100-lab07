#include "gtest/gtest.h"
#include "multTest.hpp"
#include "divTest.hpp"
#include "powTest.hpp"
#include "parseTest.hpp"

int main2(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
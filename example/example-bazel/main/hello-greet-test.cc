#include <string>
#include "gtest/gtest.h"
#include "main/hello-greet.h"

TEST(HelloGreetTest, get_greet) {
  std::string result = get_greet("2022-11-30 23:03:57");
  printf("print:%10s result:%10s\n", "==========", result.c_str());
}
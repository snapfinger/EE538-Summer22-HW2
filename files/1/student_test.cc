#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(GetFullName, test1) {
  CPPLib cpp_lib;
  std::string first = "Tommy";
  std::string last = "Trojan";
  std::string expected = "Tommy Trojan";
  EXPECT_EQ(cpp_lib.GetFullName(first, last), expected);
}
//-----------------------------------------------------------------------------
TEST(CountCharacters, test1) {
  CPPLib cpp_lib;
  std::string input = "This is a test";
  std::vector<char> characters = {'t','h'};

  EXPECT_EQ(cpp_lib.CountCharacters(input, characters), 4);
}

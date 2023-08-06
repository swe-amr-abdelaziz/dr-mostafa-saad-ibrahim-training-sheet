#include "src/anton-and-danik.h"

#include "gtest/gtest.h"

TEST(AntonAndDanik, TestCase1) {
  int n = 6;
  string str = "ADAAAA";
  string output = "Anton";

  EXPECT_EQ(antonAndDanik(n, str), output);
}

TEST(AntonAndDanik, TestCase2) {
  int n = 7;
  string str = "DDDAADA";
  string output = "Danik";

  EXPECT_EQ(antonAndDanik(n, str), output);
}

TEST(AntonAndDanik, TestCase3) {
  int n = 6;
  string str = "DADADA";
  string output = "Friendship";

  EXPECT_EQ(antonAndDanik(n, str), output);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

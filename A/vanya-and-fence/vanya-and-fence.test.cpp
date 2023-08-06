#include "src/vanya-and-fence.h"

#include "gtest/gtest.h"

TEST(VanyaAndFence, TestCase1) {
  int n = 3;
  int h = 7;
  int heights[] = {4, 5, 14};
  int output = 4;

  EXPECT_EQ(vanyaAndFence(n, h, heights), output);
}

TEST(VanyaAndFence, TestCase2) {
  int n = 6;
  int h = 1;
  int heights[] = {1, 1, 1, 1, 1, 1};
  int output = 6;

  EXPECT_EQ(vanyaAndFence(n, h, heights), output);
}

TEST(VanyaAndFence, TestCase3) {
  int n = 6;
  int h = 5;
  int heights[] = {7, 6, 8, 9, 10, 5};
  int output = 11;

  EXPECT_EQ(vanyaAndFence(n, h, heights), output);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

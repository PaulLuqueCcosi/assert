#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, otherAssertions) {
	// Expect two strings not to be equal.
  EXPECT_DOUBLE_EQ(1.0 * 2.3, 2.3);

}

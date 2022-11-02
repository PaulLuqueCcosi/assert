#include "list.cc"
#include "gtest/gtest.h"

TEST(ListTest, EmptyList) {
  List *list = new List();
  EXPECT_EQ(0, list->size());
  EXPECT_TRUE(list->isEmpty());
}

TEST(ListTest, append) {
  List *list = new List();
  list->append(1);
  EXPECT_EQ(1, list->size());
  EXPECT_FALSE(list->isEmpty());

  list->append(2, 0);
  EXPECT_EQ(2, list->size());
  EXPECT_EQ(2, list->head());
}

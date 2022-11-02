#include "list.cc"
#include "gtest/gtest.h"

TEST(ListTest, EmptyList) {
	List *list = new List();
	EXPECT_EQ(0, list->size());
	EXPECT_TRUE(list->isEmpty());
}

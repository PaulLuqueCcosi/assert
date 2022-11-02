// a file for google test

#include "ArrayStack.cc"
#include "Stack.h"

#include "gtest/gtest.h"

TEST(ArrayStackTest, TopTest) {
	Stack<int> *stack =  new ArrayStack<int>(10);

	stack->push(1);
	stack->push(2);
	stack->push(3);
	EXPECT_EQ(3, stack->top());

}

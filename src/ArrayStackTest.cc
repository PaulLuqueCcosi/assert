// a file for google test

#include "ArrayStack.cc"
#include "Stack.h"
#include "gtest/gtest.h"


TEST(ArrayStackTest, Constructor) {
  Stack<int> *stack =  new ArrayStack<int>(10);
  EXPECT_TRUE(stack->empty());
  delete stack;
}

TEST(ArrayStackTest, Push) {
  Stack<int> *stack =  new ArrayStack<int>(10);
  stack->push(1);
  EXPECT_EQ(1, stack->top());
  EXPECT_FALSE(stack->empty());
  delete stack;
}

TEST(ArrayStackTest, Pop) {
  Stack<int> *stack =  new ArrayStack<int>(10);
  stack->push(1);
  stack->push(2);
  stack->push(3);
  stack->pop();
  EXPECT_EQ(2, stack->top());
  EXPECT_FALSE(stack->empty());
  delete stack;
}

TEST(ArrayStackTest, Top) {
  Stack<int> *stack =  new ArrayStack<int>(10);
  stack->push(1);
  stack->push(2);
  stack->push(3);
  EXPECT_EQ(3, stack->top());
  stack->pop();
  EXPECT_EQ(2, stack->top());
  EXPECT_FALSE(stack->empty());
  delete stack;
}

TEST(ArrayStackTest, Resize) {
  Stack<int> *stack =  new ArrayStack<int>(10);
  for (int i = 1; i <= 20; i++)
    stack->push(i);
  EXPECT_EQ(20, stack->top());
  EXPECT_FALSE(stack->empty());
  delete stack;
}

TEST(ArrayStackTest, Empty) {
  Stack<int> *stack =  new ArrayStack<int>(10);
  EXPECT_TRUE(stack->empty());
  stack->push(1);
  EXPECT_FALSE(stack->empty());
  stack->pop();
  EXPECT_TRUE(stack->empty());
  delete stack;
}

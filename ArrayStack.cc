#include "ArrayStack.h"
#include <assert.h>
#include <iostream>
#define NewStackSizeFactor 10

template <typename T>
void ArrayStack<T>::push(T e){
  int numElem = sp - data;
  if (numElem == size)
    resize();

  *sp = e;
  sp++;

  // postcondition
  assert(*sp == e); // 2. pop(push(S,I))  = S
  assert(empty() == false); // 3. empty(push(S,I)) = false
}

template <typename T>
void ArrayStack<T>::pop() {
  assert(!empty()); // 1 pop(newstack)   = newstack
  // if (empty())
  //  return;

  sp--;
}


template <typename T>
T ArrayStack<T>::top() {
  assert(!empty()); //axioma 3 top(newstack)   = newstack
  return *(sp - 1);
}

template <typename T>
void ArrayStack<T>::resize() {
  //int moreSize = 10;
  int newSize = size + NewStackSizeFactor;

  T * newdata = new T(newSize);

  for (int i = 0; i < size; i++)
    newdata[i] = data[i];

  delete[] data;
  data = newdata;
  sp = data + size;
  size = newSize;

}

template <typename T>
bool ArrayStack<T>::empty() {
  // empty(newstack) = true
  
  return sp == data;
  
  // postcondition

}


// main function

int main(){
  ArrayStack<int> * pstack = new ArrayStack<int>(10);
  // pstack->push(1);
  // pstack->push(2);
  // pstack->push(3);
  // pstack->push(4);

  pstack->pop();
  std::cout << pstack->top() << std::endl;

  return 0;
}


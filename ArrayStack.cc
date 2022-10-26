#include "ArrayStack.h"
#include <assert.h>
#define NewStackSizeFactor 10
template <typename T>
void ArrayStack<T>::push(T e){
  int numElem = sp - data;
  if (numElem == size)
    resize();

  *sp = e;
  sp++;
}

template <typename T>
void ArrayStack<T>::pop() {
  assert(!empty()); //axioma pop(newstack)   = newstack
  // if (empty())
  //  return;

  sp--;
}


template <typename T>
T ArrayStack<T>::top() {
  assert(!empty()); //axioma top(newstack)   = newstack
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


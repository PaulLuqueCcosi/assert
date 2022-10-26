#include "ArrayStack.h"
#include <assert.h>
#include <iostream>
#define NewStackSizeFactor 10

template <typename T>
ArrayStack<T>::ArrayStack(int zs){
  size = zs;
  data = new T[size];
  sp = data;

  // postcondition
  assert(empty());  // 5. empty(newstack) == true
  
}


template <typename T>
void ArrayStack<T>::push(T e){
  int numElem = sp - data;
  if (numElem == size)
    resize();

  *sp = e;
  sp++;

  // postcondition
  assert(top() == e); // 4. top(push(S,I)) = I
  assert(empty() == false); // 6. empty(push(S,I)) = false
}


template <typename T>
void ArrayStack<T>::pop() {
  if (empty())
    return;
  sp--;	
}


template <typename T>
T ArrayStack<T>::top() {
  //precondition
  assert(!empty()); // 3. top(newstack)   = newstack
  
  return *(sp - 1);
}

template <typename T>
void ArrayStack<T>::resize() {
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

  return sp == data;


}

// -------------------------------------------------

// main function

int main(){
  ArrayStack<int> * pstack = new ArrayStack<int>(10);
  std::cout << pstack->empty() << std::endl;
  pstack->push(1);
  pstack->push(2);
  pstack->push(3);
  pstack->pop();


  std::cout << pstack->top() << std::endl;
  std::cout << pstack->empty() << std::endl;
  return 0;
}


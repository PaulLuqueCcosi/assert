#include<iostream>
#include "ArrayStack.h"

int main(){
  //ArrayStack<int> stack(10);

  ArrayStack<int> * pstack = new ArrayStack<int>(10);

  pstack->push(1);
  return 0;
}

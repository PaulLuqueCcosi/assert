#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include "Stack.h"

template <typename T>
class  ArrayStack : public Stack<T>{
  private:
    T * data; // error, con T[] 
    int size;
    T* sp;
    void resize();

  public:
    ArrayStack(int zs);
    ~ArrayStack() { delete [] data; }

    void push(T);
    void pop();
    T top();
    bool empty();

};
#endif


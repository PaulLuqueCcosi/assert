#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include "Stack.h"

template <typename T>
class  ArrayStack : public Stack<T>{
  private:
    T data [];
    int size;
    T* sp;
    void resize();

  public:
    ArrayStack(int zs) : size(zs), data{new T[size]}, sp{data} {}
    ~ArrayStack() { delete [] data; }

    void push(T);
    void pop();
    void top();
    bool empty();

};
#endif


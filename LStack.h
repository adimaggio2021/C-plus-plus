#ifndef LSTACK_H
#define LSTACK_H

/* Linked Stack
 */

#include <iostream>
#include "Node.h"

template <class T>

class LStack{
 public:
  Node<T>* top;
  int size;

  // constructors
  explicit LStack(){
    top = nullptr;
    size = 0;
  }

  //accessors
  T peak() {
	  return top->getElement();
  }
  int getSize() {
	  return size;
  }

  //mutators
  void push(T element) {
	  Node<T>* cur;
	  cur->setElement(element);
	  cur->setNext(top);
	  top = cur;
	  size++;
  }
  T pop() {
	  T result = top->getElement();
	  Node<T>* pop = top;
	  top = top->getNext();
	  delete pop;
	  size--;
	  return result;
  }

};
#endif

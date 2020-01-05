#ifndef LQUEUE_H
#define LQUEUE_H

/* Linked Queue
 */

#include <iostream>
#include "Node.h"

template <class T>

class LQueue{
 public:
  Node<T>* front;
  int size;

  // constructors
  explicit LQueue(){
    front = nullptr;
    size = 0;
  }

  //accessors
  T peak() {
	  return front->getElement();
  }
  int getSize() {
	  return size;
  }

  //mutators
  void enqueue(T element) {
	  Node<T>* cur;
	  cur = front;
	  for(int i = 0; i<size-1; i++){
		  cur = cur->getNext();
	  }
	  Node<T>* en;
	  en->setElement(element);
	  cur->setNext(en);
	  size++;
  }
  T dequeue() {
	  Node<T>* cur = front;
	  front = front->getNext();
	  delete cur;
	  size--;
  }

};
#endif
    

#ifndef ASTACK_H
#define ASTACK_H

/* Linked Stack
 */

#include <iostream>
#include <vector>
using namespace std;

template <class T>

class AStack{
 public:
  
  int size;
  vector<T> stack;

  // constructors
  explicit AStack(){
    size = 0;
  }

  //accessors
  T peak() {
	  return stack.at(size-1);
  }
  int getSize() {
	  return size;
  }

  //mutators
  void push(T element) {
	  stack.push_back(element);
	  size++;
  }
  T pop() {
	  T result = stack.at(size-1);
	  stack.pop_back();
	  size--;
	  return result;
  }

};
#endif
    

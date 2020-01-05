#ifndef AQUEUE_H
#define AQUEUE_H

/*Array Queue
 */

#include <iostream>
#include "Node.h"
#include <vector>
using namespace std;

template <class T>

class AQueue{
 public:
  vector<T> q;
  int size;

  // constructors
  explicit AQueue(){
    size = 0;
  }

  //accessors
  T peak() {
	  return q.front();
  }
  int getSize() {
	  return size;
  }

  //mutators
  void enqueue(T element) {
	  q.push_back(element);
	  size++;
  }
  T dequeue() {
	  T result = q.at(0);
	  q.erase(q.begin());
	  size--;
	  return result;
  }

};
#endif
    

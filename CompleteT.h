#ifndef COMPLETET_H
#define COMPLETET_H


#include <iostream>
#include <vector>


class CompleteT{
 public:
  vector<int> tree;
  int size;

  // constructors
  explicit CompleteT(){
    size = 0;
  }

  //accessors
  void remove(int index) {
	  for(int i = index +1; i<size;i++){
		  tree[index-1] = tree[index];
	  }
	  tree.erase(size-1);
	  size--;
  }

  int getSize() {
	  return size;
  }

  //mutators
  void add(int element) {
	  tree.push_back(element);
	  size++;
  }

  bool contains(int x) {
	  for(int i = 0; i<size;i++){
		  if(tree[i] == x)return true;
	  }
	  return false;
  }

  void preorder(int start){
	  std::cout << tree[start];
	  preorder(start*2+1);
	  preorder(start*2+2);
  }

  void postorder(int start){
	  postorder(start*2+1);
	  postorder(start*2+2);
	  std::cout << tree[start];
  }

  void inorder(int start){
  	  inorder(start*2+1);
  	  std::cout << tree[start];
  	  inorder(start*2+2);
    }

};
#endif
    

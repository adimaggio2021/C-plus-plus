#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include "Node.h"
#include "AQueue.h"
#include "LQueue.h"
#include "LStack.h"
#include "AStack.h"


using namespace std;

int main()
{
	AStack as;
	as.push(1);
	as.push(2);
	cout << as.getSize() << endl;
	cout<< as.pop()<< endl;

	LStack ls;
	ls.push(1);
	ls.push(2);
	cout << ls.getSize()<< endl;
	cout<< ls.pop()<< endl;

	AQueue aq;
	aq.push(1);
	aq.push(2);
	cout << aq.getSize()<< endl;
	cout<< aq.pop()<< endl;

	LQueue lq;
	lq.push(1);
	lq.push(2);
	cout << lq.getSize()<< endl;
	cout<< lq.pop()<< endl;




}
  

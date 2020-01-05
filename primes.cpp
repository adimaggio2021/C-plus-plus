#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// method that gets the arrays from a .txt file with
// comma seperated values where a new line starts
// a new list
vector<vector<int> > getArrays(string fileName){
  // create a vector of vectors of ints to store the integers
  vector<vector<int> > data;

  // initialize the input stream and open the file
  ifstream infile;
  infile.open(fileName);

  // while there are lines in the file
  while (infile){
    string s;
    if (!getline(infile, s)) break; // break if there isn't another line

    // create an object to help you read strings from the file called ss
    istringstream ss( s );
    vector <int> record;
    int j = 0;

    // while there are still whitespace seperated strings
    while (ss){
      string f; string s; int i = 0;
      // put the next string from the file commas attached to end 
      ss >> f;
      while (i < f.length()){
	while (f[i] != ',' && i < f.length()){ 
	  s += f[i];
	  i++;
	}
	// stoi is a function to convert a string to an int
	// push the result to the back of the vector
	record.push_back(stoi(s)); 
	s = ""; // clear s
	i++; 
      }
    }

    // push the whole row to the back of the vecotr
    data.push_back(record);
  }
  if (!infile.eof()){ // if the file is empty
    cout<<"EMPTY FILE"<<endl;
  }
  return data;
}

  
//dummy method to measure time for
void code_to_time(){
  int sum = 0;
  for(int i = 0; i < 10000; i++){
    sum *= 1.5;
  }
}


//Big Oh of N
void simprime(int index){
	//checks everything under x/2
	vector<vector<int> > primes = getArrays("primes.txt");
	vector<int> sprime = primes[index];
	for(int h = 0; h<sprime.size();h++){
		int x = sprime[h];
		for (int i = 2; i<(x/2+1); i++){
		        if(x%i == 0){
		        	//std::cout << x << endl;
		        	break;
		        }
		    }
	}

}

//Big Oh of N
void smartprime(int index){
	//checks two and every odd under x/2
	vector<vector<int> > primes = getArrays("primes.txt");
	vector<int> sprime = primes[index];
	for(int h = 0; h<sprime.size();h++){
		int x = sprime[h];
		if(x%2 == 0){
			//std::cout << x << endl;
		}else{
		for (int i = 3; i<(x/2+1);){
		        if(x%i == 0){
		        	//std::cout << x << endl;
		        	break;
		        }
		        i += 2;
		    }
		}
	}

}

//Big Oh of root n
void rootprime(int index){
	//checks 2 and every odd under root x
	vector<vector<int> > primes = getArrays("primes.txt");
	vector<int> sprime = primes[index];
	for(int h = 0; h<sprime.size();h++){
		int x = sprime[h];
		if(x%2 == 0){
			//std::cout << x << endl;
		}else{
		for (int i = 3; i*i<= x;){
		        if(x%i == 0){
		        	//std::cout << x << endl;
		        	break;
		        }
		        i += 2;
		    }
		}
	}

}

//method to measure time of code_to_time()
double measureTime(int index){
  using namespace std::chrono;

  // create a start time
  steady_clock::time_point start = steady_clock::now();

  // call whatever function you are timing
  rootprime(index);

  // get the end time
  steady_clock::time_point end = steady_clock::now();

  //get the difference
  duration<double> time_span = duration_cast<duration<double> >(end - start);
  return time_span.count();
}

int main()
{

	for(int i = 0; i<7;i++){
	cout  << "TIME" << measureTime(i) << endl;
	}
	return 0;
}
  

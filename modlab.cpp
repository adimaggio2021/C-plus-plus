//============================================================================
// Name        : modlab.cpp
// Author      : Anthony D.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Example program
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//euclidian algorithm
int ea(int one, int two){
    if(two == 0){
        return one;
    }
    int three = one % two;
    return ea(two, three);
}

//prime checker
int isprime(int x){
    for (int i = 2; i<(x/2+1); i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}


void gens(){
    std::cout << "Enter prime modulus\n";
    int x = 3;
    int y = 4;
    //prime loop
    while(isprime(y) == 0){
        if(isprime(x) == 0){
            std::cout << "Not prime. Enter another number\n";
        }
        std::cin >> y;
        x = y;
    }
    int h;
    	int m = 2;
    	while(m<y){
    	int indicator = 1;
    	//for loop iterates through powers
        for(int t = 1; t<y; t++){
        	//simplified mod multiplication
        	indicator = (indicator *m) % y;
            if(indicator == 1){
            	std::cout << t << endl;
            	//generator check, breaks if not
                if(t == (y-1)){
                    std::cout << "GEN" << m << endl;
                    m++;
                    break;
                }else{
                	m++;
                	break;
                }
            }
        }
    }
}

int main()
{
	std::cout << "hello" << endl ;
    gens();
	return 0;
}

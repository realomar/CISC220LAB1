/*
 * CISC220 LAB 1
 *  Created on: Aug 30, 2018
 *      Authors: omaromar@udel.edu Omar Ahmad
 *      		 tamimoz@udel.edu  Ahmad Tamimi
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

int stars(); // problem 2
bool isPrime(int a); // problem3

int main(){ // problem 1
	cout << "Hello world" << endl;
	return 0;
}

int stars(){
	cout << "*****" << endl;
	return 0;
}

bool isPrime(int a){
	if(a < 1) return False;
	else{
		int div = a - 1;
		while(div != 1){
			if (a%div  == 0) // finish this later
		}
	}
}

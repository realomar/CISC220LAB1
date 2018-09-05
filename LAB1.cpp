/*
 * CISC220 LAB 1
 * Debra Yarrington
 *
 * Created on: Aug 30, 2018
 *
 * Authors: omaromar@udel.edu Omar Ahmad
 *  		tamimoz@udel.edu  Ahmad Tamimi
 *
 * This file contains functions for lab 1. The functions aren't related
 * in any other way that they are required for lab 1.
 */
#include <iostream> //imports input/output
#include <stdlib.h> //includes std library
using namespace std;

int stars(); // problem 2
bool isPrime(int a); // problem 3
int sumTo300(); //problem 4
int termsFor100K(); //problem 5
int multiplicationTable(int a); //problem 6
int multiplicationTable2(); //problem 7
int collatzConjecture(); //problem 8
int leapYear(); //problem 9
int xStars(int a); //problem 10
int collatzConjecture2(int a, int b); //problem 11
bool isPrimeRecursion(int number, int divisor); //problem 12
int multiplicationTableRecursion(int number, int multiplier); //problem 13

int main(){ // problem 1
	cout << "Hello World" << endl; //prints out "Hello World"
	stars();
	cout << isPrime(5) << endl; // test case #1 for problem 3, isPrime() function. true
	cout << isPrime(37) << endl; // test case #2 for problem 3, isPrime() function. true
	cout << isPrime(90) << endl; // test case #3 for problem 3, isPrime() function. true
	stars();
	sumTo300(); //test case for problem 4, sumTo300(), prints out the sum each 20 terms and ends with 45150.
	stars();
	cout <<"The number of terms required for the sum of all natural numbers starting from 1 is " << termsFor100K() << endl; //test case for problem 5, termsFor100K. The number of terms is 447.
	stars();
	multiplicationTable(5); //test case 1 for problem 6, multiplicationTable() for the number 5. Prints out the multiplication table for the number 5 with the integer numbers from 1 to 12.
	multiplicationTable(9); //test case 2 for problem 6, multiplicationTable() for the number 9. Prints out the multiplication table for the number 9 with the integer numbers from 1 to 12.
	multiplicationTable(10); //test case 3 for problem 6, multiplicationTable() for the number 10. Prints out the multiplication table for the number 10 with the integer numbers from 1 to 12.
	stars();
	multiplicationTable2(); //test case for problem 7, multiplicationTable(), will print out 12 different multiplication tables for all the integer numbers from 1 to 12.
	stars();
	collatzConjecture(); //test case 1 for problem 8, collatzConjecture(), will print the number of time the Collatz Conjecture had to loop to get the number to 1. I will test the number 17. It counted 12 loops.
	stars();
	leapYear(); //test case for problem 9, leapYear(), prints out the leap years in the next 400 years according to some criteria.
	stars();
	xStars(5); //test case 1 for problem 10, xStars(), this test case uses the number 5 as a test. Will print out an x star with 9 columns and 9 rows.
	xStars(7); //test case 3 for problem 10, xStars(), this test case uses the number 7 as a test. Will print out an x star with 13 columns and 13 rows.
	xStars(10); //test case 2 for problem 10, xStars(), this test case uses the number 10 as a test. Will print out an x star with 21 columns and 21 rows
	stars();
	collatzConjecture2(5, 11); //test case 1 for problem 11, collatzConjecture2(int a, int b), using the integers 5 an 11 and testing them and all the numbers in between for the Collatz Conjecture.
	collatzConjecture2(8, 20); //test case 1 for problem 11, collatzConjecture2(int a, int b), using the integers 5 an 11 and testing them and all the numbers in between for the Collatz Conjecture.
	collatzConjecture2(7, 42); //test case 1 for problem 11, collatzConjecture2(int a, int b), using the integers 5 an 11 and testing them and all the numbers in between for the Collatz Conjecture.
	stars();
	cout << isPrimeRecursion(47, 2) << endl; //test case 1 for problem 12, isPrimeRecursion(int number, int divisor), using the first input parameter as 47 (the number to check if its prime), with the second number the divisor being 2. This function will use recursion and print out true (1) to the console.
	cout << isPrimeRecursion(56, 2) << endl; //test case 1 for problem 12, isPrimeRecursion(int number, int divisor), using the first input parameter as 56 (the number to check if its prime), with the second number the divisor being 2. This function will use recursion and print out false (0) to the console.
	cout<< isPrimeRecursion(2017, 2) << endl; //test case 1 for problem 12, isPrimeRecursion(int number, int divisor), using the first input parameter as 2017 (last year) (the number to check if its prime), with the second number the divisor being 2. This function will use recursion and print out true (1) to the console.
	stars();
	multiplicationTableRecursion(3,1); //test case 1 for problem 13, multiplicationTableRecursion(int number, int multiplier), using the first input parameter as 3 (the number to make the multiplication table for), with the second number being 1, the multiplier. This function will use recursion to print out the multiplication table for the first input parameter, the number 3.
	multiplicationTableRecursion(6,1); //test case 1 for problem 13, multiplicationTableRecursion(int number, int multiplier), using the first input parameter as 6 (the number to make the multiplication table for), with the second number being 1, the multiplier. This function will use recursion to print out the multiplication table for the first input parameter, the number 6.
	multiplicationTableRecursion(9,1); //test case 1 for problem 13, multiplicationTableRecursion(int number, int multiplier), using the first input parameter as 9 (the number to make the multiplication table for), with the second number being 1, the multiplier. This function will use recursion to print out the multiplication table for the first input parameter, the number 9.
	stars();
	return 0;
}

int stars(){ //problem 2, takes no parameters and prints out a line of stars to help differentiate the tests of one question from the others.
	cout << "***********************************" << endl; // prints stars
	return 0; //dummy return statement
}

bool isPrime(int a){ //problem 3, take an integer parameter to determine whether that parameter is prime or not, and it returns a boolean: True (or 1) if it is prime, False (or 0) if its not.
	if(a <= 1){
		return false; // 0 or negative numbers cannot be prime.
	}
	else{
		int div = 2;
		while(div != a){ // this loop divides the input by progressively larger numbers to find a potential factor
			if (a % div  == 0)
			{
				return false;
			}
			else{
				div= div +1;
			}
		}
		return true;
	}
}

int sumTo300(){ //problem 4, takes no input parameters and calculates the sum of the first 300 natural numbers and it displays the total after every 20 terms using a if statement to check if the the number of terms is a multiple of 20. This function returns nothing but prints out the sum every 20 terms.
	int sum = 0;
	for(int term = 0; term < 301; term++){ // for loop ending at 300, counting up
		sum = sum +term;
		if (term % 20 ==0) {
			cout << sum << endl;
		}
	}
	return 0;
}

int termsFor100K(){ //problem 5, takes no input parameter, this function will figure out how many terms in the sum of the natural numbers it requires for the sum to exceed 100,000. This function will return the number of terms required. The function will use a while loop to determine the number of terms required.
	int sum = 0;
	int term = 0;
	while (sum <100000){
		term = term +1;
		sum = sum +term;
	}
	return term;
}

int multiplicationTable(int a){ //problem 6, takes an integer number as an input and it prints out the multiplication tables between 1 and 12 and that integer using a for loop. This function returns nothing but prints out a multiplication table (12 lines long) for the integer input.
	cout << "Multiplication table for the number " << a << ":" << endl;
	cout << " " << endl;

	for(int b = 1; b<13; b++){ // iterates table up to 12
		cout << a << " multiplied by " << b << " = " << a*b << endl;
	}
	cout << " "<< endl; //put a space in to help differentiate between the different multiplication tables for the different test cases.
	return 0;
}

int multiplicationTable2(){ //problem 7, takes no parameters and loops from 1-12 to print out all the multiplication tables between 1 and 12 using the function from problem 6 while also using a for loop. This function will return nothing but print 12 multiplication tables.
	for(int i = 1; i<13; i++){ // iterates table up to 12
		cout <<multiplicationTable(i) << endl;
	}
	return 0;
}

int collatzConjecture(){ //problem 8, takes no parameters but asks the user o input an integer number using cin <<. That number will used as a starting point in the collatz conjecture. This function returns an integer which represents the number of times the Collatz Conjecture had to loop until the number is equal to 1.
	int number;
	cout << "Please enter an integer value: ";
	cin >> number;
	int loops = 0;
	while (number != 1){ //keeps going until number is 1. Iterates loops on each run.
		if (number % 2 == 0){
			number = number /2;
			loops = loops +1;
		}
		else{
			number = number*3 +1;
			loops = loops +1;
		}

	}
	cout << loops << endl;
	return loops;
}

int leapYear(){ //problem 9, no input parameters, this function calculates all the leap years in the next 400 years and prints them out (Starting from 2017). This functions returns nothing, it just prints the leap years as it loops.
	for (int year = 2017; year < 2418; year++){ // sets bounds of calculation
		if (year%4 == 0){ //nested if statements to determine if a given year is a leap year.
			if (year%100 == 0) {
				if (year%400 == 0){
					cout << year<< endl;
				}
			}
			else{
				cout << year<< endl;
			}
		}
	}
	return 0;
}

int xStars(int a){ //problem 10 this function takes an integer as an input parameter, then prints out the stars in the shape of an x that is 2 times that integer minus 1 tall. This function uses nested for loops, and if the input is an even number it rounds it up to the next odd number. This function doesn't return anything, just prints out an x of stars.
	if (a%2 == 0){
		a = a+1;
	}

	for(int row = 1; row <2*a; row++){ // iterates through the lines, positioning the characters according to the line number.
		for(int column = 1; column <2*a; column++){
			if (row == column){
				cout <<"*";
			}
			else if (column + row == 2*a ){
				if(row == 1){
					cout <<"*"<< endl;
				}
				else{
					cout << "*";
				}
			}
			else if (column == 2*a-1){
				cout <<" "<< endl;
			}
			else {
				cout << " ";
			}
		}
		if (row ==2*a -1){
			cout << "" << endl;
		}
	}
	return 0;
}

int collatzConjecture2(int a, int b){ //problem 11, this function takes two integer input parameters, the first integer parameter is smaller than the second integer parameter. This function modifies the first collatzConjecture(), to test all the numbers between the two integer parameters (without asking the user for an input) if they follow the Collatz Conjecture the function will print out that number followed by a 1 if the conjecvture worked. The function will loop through all the numbers between and it should return nothing.
	for(int number = a;number <b+1;number++){ // iterates until a and b are the same.
		cout << number << endl;
		int testNumber = number;
		while (testNumber != 1){ // testing collatz conjecture again.
			if (testNumber % 2 == 0){
				testNumber = testNumber /2;
			}
			else{
				testNumber = testNumber*3 +1;
			}
		}
		cout << "1" << endl;
	}
	return 0;
}

bool isPrimeRecursion(int number, int divisor){//problem 12, this function takes 2 input parameters, the first one is the number to check if its prime or not, and the second number is the divisor. The function uses recursion to figure out if the number is prime, the second parameter should always be 2. This function will reurn back a boolean, true (1) if the number is prime, false (0) if the number isn't prime.
	if(number <= 1){ // negative and zero are not prime
		return false;
	}
	else if(divisor == number){ //this scenario does not require recursion
		return true;
	}
	else if(number % divisor == 0){ //number cannot be a prime in this case
		return false;
	}
	else{ //calls the same function, with an incremented divisor
		return isPrimeRecursion(number, divisor +1);
	}
}

int multiplicationTableRecursion(int number, int multiplier){//problem 13, this function takes 2 input parameters, the first one being the number to get a multiplier table for, the second number is the multiplier (the number to be multiplied by the first number). The multiplier (second parameter) should always be 1 at the start. This function uses recursion to print out the multiplication table of that number from the number 1 to 12. This function returns nothing but ut prints out the multiplication table of the number in the first input parameter.
	if(multiplier <13){
		if(multiplier == 12){
			cout << number << " multiplied by " << multiplier << " = " << number*multiplier << endl;
			cout << "" << endl; //leaving a blank line empty to help differentiate between the 3 different test cases in main().
		}

		else{
			cout << number << " multiplied by " << multiplier << " = " << number*multiplier << endl;
			multiplicationTableRecursion(number, multiplier+1);
		}
	}
	return 0;
}

// end of lab 1 CISC220

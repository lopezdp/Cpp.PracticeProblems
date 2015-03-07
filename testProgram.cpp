/*
David P. Lopez
COP2335 - Midterm Exam
Project Number Array Class
3/5/2015
*/

//Implementation file for the NumberArray class.
#include <iostream>
#include <cstdlib>
#include "NumberArray.h"

using namespace std;

//prototypes
int programMenu();

int main()
{
	int size, subscript, userSelection;
	double value;

	cout << "What is the size of the array you want to create? ";
	cin >> size;
	cout << endl;

	NumberArray numbers(size);
	for (subscript = 0; subscript < size; subscript++)
	{
		numbers.setElement(subscript, 0);
		cout << "An empty array of floats has been dynamically allocated as per your specifications!!!" << endl;
	}

	userSelection = programMenu();

	switch (userSelection)
	{
	case 1: 
		cout << "What array element would you like to add a number to? ";
		cin >> subscript;
		cout << endl;

		cout << "What value would you like to put in your array element? ";
		cin >> value;
		cout << endl;

		numbers.setElement(subscript, value);

	case 2:



	}

	return 0;
}

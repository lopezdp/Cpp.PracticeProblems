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

//The Constructor sets each element to 0
NumberArray::NumberArray(int size)
{
	arrFloats = new double[size];
	arrSize = size;

	for (int index = 0; index < size; index++)
	{
		arrFloats[index] = 0;
	}
}

//The destructor releases allocated memory
NumberArray::~NumberArray()
{
	delete[] arrFloats;
}

//isValid member function returns true if arg is valid subscript for arrFloats
bool NumberArray::isValid(int arrElement) 
{
	bool status;

	if (arrElement < 0 || arrElement >= arrSize)
		status = false;
	else
		status = true;
	
	return status;
}

// setElement stores a float value in each element of the array
void NumberArray::setElement(int arrElement, double value)
{
	if (isValid(arrElement))
		arrFloats[arrElement] = value;
	else
	{
		cout << "Error: Invalid subscript - Out of Bounds!!!" << endl;
		exit(EXIT_FAILURE);
	}
}

// getElement returns the float value in each element called by the array aubscript passed
double NumberArray::getElement(int arrElement) 
{
	if (isValid(arrElement))
		return arrFloats[arrElement];
	else
	{
		cout << "Error: Invalid subscript - Out of Bounds!!!" << endl;
		exit(EXIT_FAILURE);
	}
}




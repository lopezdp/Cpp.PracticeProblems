/*
David P. Lopez
COP2335 - Midterm Exam
Project Number Array Class
3/5/2015
*/

//Specification file for the NumberArray class.
#ifndef NUMARRAY_H
#define NUMARRAY_H

//NumberArray class declaration

class NumberArray
{
private:
	double *arrFloats; //Pointer to the array
	int arrSize; //Size/Number of elements in array
	bool isValid(int); //validate subscript

public:
	NumberArray(int); //Constructor
	~NumberArray(); //Destructor MOFO!!!

	//Setters
	void setElement(int, double); //Sets an element to a value

	//Getters
	double getElement(int); //Gets a value from an element!!!!!
	double getHighest(int); //Gets highest value stored in the array
	double getLowest(int); //Gets lowest value stored in the array
	double getAverage(int); //Gets the average value of all elements stored in the array
};

#endif

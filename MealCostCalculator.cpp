/*
Task 
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent 
(the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

Input Format

There are 3 lines of numeric input: 
The first line has a double, mealCost (the cost of the meal before tax and tip). 
The second line has an integer, tipPercent (the percentage of mealCost being added as tip). 
The third line has an integer, taxPercent (the percentage of mealCost being added as tax).

Output Format

Print The total meal cost is totalCost dollars., where totalCost is the rounded integer result of the entire bill (mealCost with added tax and tip).

Sample Input

12.00
20
8
Sample Output

The total meal cost is 15 dollars.
Explanation

Given: 
mealCost = 12, tipPercent = 20, taxPercent = 8 

Calculations: 
tip = mealCost * (tipPercent/100)
tax = mealCost * (taxPercent/100)
totalCost = mealCost + tip + tax 
round(totalCost)

We round  to the nearest dollar (integer) and then print our result:

The total meal cost is 15 dollars.
*/

#include <iostream> 
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int tipPercent, taxPercent;
	double mealCost, totalCost, tip, tax;

	cin >> mealCost >> tipPercent >> taxPercent;

	tip = mealCost * (tipPercent/double(100));
	tax = mealCost * (taxPercent/double (100));
	totalCost = mealCost + tip + tax; 

	//cout << totalCost;

	cout << "The total meal cost is " << int(nearbyint(totalCost)) << " dollars.";





	return 0;
}
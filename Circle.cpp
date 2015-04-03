#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
	private:
		double radius;
		double pi; 
	
		
		
	public:
		Circle()
		{
			radius = 0;
			pi = 3.14159;
		}
	
		Circle(int radius)
		{
			this->radius = radius;
			pi = 3.14159;
		}
	
		void setRadius(double radius)
		{
			this->radius = radius;
		}
	
		double getRadius()
		{
			return radius;
		}
	
		double getArea()
		{
			double area = pi * pow(radius,2);
			return area;
		}
	
		double getDiameter()
		{
			double diameter = radius * 2;
			return diameter;
		}
	
		double getCircumference()
		{
			double circumference = 2 * pi * radius;
			return circumference;
		}
};

int main()
{
	
	Circle circle1;

	cout << "Calling default constructor: ";	
	
	cout << "The circle's radius in the default Circle Object is: " << circle1.getRadius() << endl;
	
	cout << "Calling setRadius(20) to change the radius of the default constructor: " << endl;
	
	circle1.setRadius(20);
	
	cout << "The circle's radius in the default constructor is now: " << circle1.getRadius() << endl;
	
	cout << "Creating the circle2(10) Object: ";
	
	Circle circle2(10);
	
	cout << "The circle2's radius in the circle2 Object is: " << circle2.getRadius() << endl;
	
	cout << "The circle2's area is therefore: " << circle2.getArea() << endl;
	cout << "The circle2's diameter is therefore: " << circle2.getDiameter() << endl;
	cout << "The circle2's circumference is therefore: " << circle2.getCircumference() << endl;
		
	return 0;
}

#include <iostream> // this is libaray using for input and output variabls
#include <cmath> 
#include <cstring>
using namespace std;
cout<<"name : marthed ahmed mohammed ali \n class:2nd class \n department: computer engineering"
char shape[20]; // define the varible shape //
float area, rib, circumference, rib1, apothem, rib2, rib3, height, width, length, base, radius, diameter, angle;
double const pi = 3.14159; // define the pi value and variables // 
int main()
{
	loop:
	cout << "Shapes: \nTriangle, Rectangle, Square, Circle, Polygon, Ellipse" << endl;
	cout << "\nChoose your geometric shape: "; 
	cin >> shape; // input the value of the shape //
	if (strcmp(shape, "Triangle") == 0){
		cout << "Enter Triangle's base length: ";
		cin >> base; // input the value of base...//
		cout << "Enter Triangle's height length: ";
		cin >> height; // input the value of height...//
		cout << "Enter the first side Triangle's length: ";
		cin >> rib1; //  input the value of first side triangle...//
		cout << "Enter the sencond side Triangle's length: ";
		cin >> rib2; // input the second side triangle ...//
		cout << "Enter the third side Triangle's length: ";
		cin >> rib3; // input the third side of triangle ..//
		area = 0.5 * base * height; // found the value of trianglr area..//
		circumference = rib1 + rib2 + rib3; // found the value of circumference area..//
		//
	}
	else if (strcmp(shape, "Rectangle") == 0){
		cout << "Enter Rectangle's width value: ";
		cin >> width; // input the value of width..//
		cout << "Enter Rectangle's height value: ";
		cin >> height; // input the value of height..//
		area = width * height; // found the  value of triangle circumference ..//
		circumference = 2 * (height + width);
	}
	else if (strcmp(shape, "Squire") == 0){
		cout << "\nYou have choosed Square!\n\n";
		cout << "Enter side Square's length value: ";
		cin >> length; // input the length ..//
		area = length * length; // found the valueof  square circumference..//
		circumference = 4 * length;
	}
	else if (strcmp(shape, "Circle") == 0){
		cout << "\nYou have choosed Circle!\n\n";
		cout << "Enter Circle's radius value: ";
		cin >> radius; // input the value of redius ..//
		area = pi * radius * radius; // foun the value of circle area..//
		circumference = 2 * pi * radius;
	}
	else if (strcmp(shape, "Polygon") == 0){
		cout << "\nYou have choosed Polygon!\n\n";
		cout << "Enter Polygon's apothem value: ";
		cin >> apothem; // input the apothem vlaue ..//
		cout << "Enter Polygon's side length value: ";
		cin >> length; // input the length value..//
		area = 0.5 * apothem * 5 * length; ///  found the area of Polygon ..//
		circumference = length * 5;
	}
	else if (strcmp(shape, "Ellipse") == 0){
		double maj,min;
		cout << "\nYou have choosed Ellipse!\n\n";
		cout << "Enter Ellipse's Major Axis value: ";
		cin >> maj; // input  the value of ellipse value ..//
		cout << "Enter Ellipse's Minor Axis value: ";
		cin >> min; //  input the value minor axis value ..//
		area = pi * maj * min; 
		circumference = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
		// found the area of ellipse ..//
	}
	else {
		cout << "\nWrong choice\n";
		goto loop; // go to the beginning code ((start from loop varaible ..)) //
	}
	cout << "\n" << shape << "Area is: " << area << endl; // the final output shape //
	cout << shape << "Circumference is: " << circumference << endl; // the final output Circumference..//
	return 0;
}

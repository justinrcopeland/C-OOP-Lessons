//  Justin Copeland
//  Cosc1436/004
//  Ex 2.2

#include <iostream>
using namespace std;

const  double PI = 3.14;
const  double RADIUS = 5.4;


int main()

{
	float area;			  	        // definition of area of circle
	
	float  circumference;				// definition of circumference
	
    circumference = 2 * PI * RADIUS;	// computes circumference
	
    area = PI * (RADIUS * RADIUS);                // computes area
	
	cout << "\n Circumference is found by multiplying Pi with the radius of a given circle and then multiplying the outcome by 2" << endl;

	cout << "\n Area is found by found by multiplying Pi with the sum of radius squared" << endl;

	cout << "\n A radius of 5.4 would generate the following: " << endl;

	cout << "\n    The circumference of the circle is " << circumference << endl;

	cout << "         The area of the circle is " << area << "\n" << endl;

	return 0;
}

/*
haxle@tbserv ~/school $ ./Lab2

 Circumference is found by multiplying Pi with the radius of a given circle and then multiplying the 
outcome by 2

 Area is found by found by multiplying Pi with the sum of radius squared

 A radius of 5.4 would generate the following:

    The circumference of the circle is 33.912
         The area of the circle is 91.5624

haxle@tbserv ~/school $

*/

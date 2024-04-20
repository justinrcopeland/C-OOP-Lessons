//  Justin Copeland
//  Cosc1436/004
//  Ex PC11


#include <iostream>
using namespace std;

int main()
{
	float gallons, cityMiles, hwyMiles, mpg;

	gallons = 20;
	cityMiles = 21.5;
	hwyMiles = 26.8;

	mpg = cityMiles * gallons;

	cout << "My car can go " << mpg << " miles if I stay in the city" << endl;
	
	mpg = hwyMiles * gallons;

	cout << "But, if we go on a long trip, it can go " << mpg << " miles away before refueling!" << endl;

        return 0;
}
/*
haxle@tbserv ~/school/chap2 $ ./PC11
My car can go 430 miles if I stay in the city
But, if we go on a long trip, it can go 536 miles away before refueling!
haxle@tbserv ~/school/chap2 $

*/


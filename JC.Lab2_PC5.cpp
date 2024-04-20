//  Justin Copeland
//  Cosc1436/004
//  Ex PC5


#include <iostream>
using namespace std;

int main()
{
	double one, two, three, four, five, sum, avg;
	
	one = 28;
	two = 32;
	three = 37;
	four = 24;
	five = 33;
	sum = (one + two + three + four + five);
	avg = (sum/5);

	cout << "The sum of the five given variables is " << sum << endl;
	cout << "The average of the five given variables is " << avg << endl;

	return 0;
}

/*
haxle@tbserv ~/school/chap2 $ ./PC5
The sum of the five given variables is 154
The average of the five given variables is 30.8
haxle@tbserv ~/school/chap2 $
*/

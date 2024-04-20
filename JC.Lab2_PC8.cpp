//  Justin Copeland
//  Cosc1436/004
//  Ex PC8


#include <iostream>
using namespace std;

int main()
{

	double itemOne, itemTwo, itemThree, itemFour, itemFive, tax, taxes, subtotal, total;

	itemOne = 12.95;
	itemTwo = 24.95;
	itemThree = 6.95;
	itemFour = 14.95;
	itemFive = 3.95;

	tax = 0.06;
	subtotal = (itemOne + itemTwo + itemThree + itemFour + itemFive);
	taxes = subtotal * tax;
	total = taxes + subtotal;
        
	cout << "The price of your first item is " << itemOne << endl;
	cout << "The price of your second item is " << itemTwo << endl;
	cout << "The price of your third item is " << itemThree << endl;
	cout << "The price of your fourth item is " << itemFour << endl;
	cout << "The price of your fifth item is " << itemFive << endl;

	cout << "\nSubtotal: " << subtotal;
	cout << "\n     Tax: " << taxes;
	cout << "\n   Total: " << total << endl;

	return 0;
}

/*
haxle@tbserv ~/school/chap2 $ ./PC8
The price of your first item is 12.95
The price of your second item is 24.95
The price of your third item is 6.95
The price of your fourth item is 14.95
The price of your fifth item is 3.95

Subtotal: 63.75
     Tax: 3.825
   Total: 67.575
haxle@tbserv ~/school/chap2 $

*/

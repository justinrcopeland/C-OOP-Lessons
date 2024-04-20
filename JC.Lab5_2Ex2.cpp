// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// Justin Copeland
// Cosc 1436/004
// Ex 5.2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number;
	float cost;
	char beverage;
	bool validBeverage;

	cout << fixed << showpoint << setprecision(2);
	
	do
	{
		cout << endl << endl;
		cout << "Hot Beverage Menu" << endl << endl;
		cout << "A: Coffee         $1.00" << endl;
		cout << "B: Tea            $ .75" << endl;
		cout << "C: Hot Chocolate  $1.25" << endl;
		cout << "D: Cappuccino     $2.50" << endl <<endl << endl;
		
		cout << "Enter the beverage A,B,C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl << endl;
		cin >> beverage;
		
		switch(beverage)
		{
		case 'a':  validBeverage = true; 
		case 'A':  validBeverage = true;
		case 'b':  validBeverage = true;
		case 'B':  validBeverage = true;
		case 'c':  validBeverage = true;
		case 'C':  validBeverage = true;
		case 'd':  validBeverage = true;
		case 'D':  validBeverage = true;
				   break;
		default:   validBeverage = false;
		}

		if (validBeverage == true)
		{
			cout << "How many cups would you like?" << endl;
			cin >> number;
		}
		
		switch(beverage)
		{
		case 'a': cost = number * 1.0;
		case 'A': cost = number * 1.0;
			    cout << "The total cost is $ " << cost << endl;
				break;
		case 'b': cost = number * .75;
		case 'B': cost = number * .75;
			    cout << "The total cost is $ " << cost << endl;
				break;
		case 'c': cost = number * 1.25;
		case 'C': cost = number * 1.25;
			    cout << "The total cost is $ " << cost << endl;
				break;
		case 'd': cost = number * 2.5;
		case 'D': cost = number * 2.5;
			    cout << "The total cost is $ " << cost << endl;
				break;	
		
		case 'e': 
		case 'E': cout << " Please come again" << endl;
			    break;
		default:cout << "Please enter an option between A through D" << endl;
				cout << " Try again please" << endl;
		}



	} while (beverage != 'e' && beverage != 'E');
	return 0;   
}
/*
haxle@tbserv ~/school/chap5 $ ./a.out


Hot Beverage Menu

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50


Enter the beverage A,B,C, or D you desire
Enter E to exit the program

a
How many cups would you like?
4
The total cost is $ 4.00


Hot Beverage Menu

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50


Enter the beverage A,B,C, or D you desire
Enter E to exit the program

E
 Please come again
haxle@tbserv ~/school/chap5 $
*/

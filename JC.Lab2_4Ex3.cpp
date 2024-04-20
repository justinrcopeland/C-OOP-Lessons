//  Justin Copeland
//  Cosc1436/004
//  Ex 2.4

#include <iostream>
#include <string>
using namespace std;

// Declaration of constants
const string FAVORITESODA = "Dr. Dolittle";     //  use double quotes for strings
const char BESTRATING = 'A';					//  use single quotes for characters


int main()

{

	char rating;							// 2nd highest product rating 
	string favoriteSnack;					// most preferred snack
	int numberOfPeople;						// the number of people in the survey
    	int topChoiceTotal;					// the number of people who prefer the top choice
	
	//  Fill in the code to do the following:

	//  Assign the value of "crackers" to favoriteSnack
	favoriteSnack = "crackers";

	//  Assign a grade of 'B' to rating
	rating = 'B';

	//  Assign the number 250 to the numberOfPeople
	numberOfPeople = 250;

	//  Assign the number 148 to the topChoiceTotal
	topChoiceTotal = 148;

	// Fill in the blanks of the following:
	cout << "The preferred soda is " << FAVORITESODA << endl;
	cout << "The preferred snack is " << favoriteSnack << endl;
	cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING;
	cout << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating << endl;

	return 0;

}

/*
haxle@tbserv ~/school $ ./Lab3
The preferred soda is Dr. Dolittle
The preferred snack is crackers
Out of 250 people 148 chose these items!
Each of these products were given a rating of A from our expert tasters
The other products were rated no higher than a B
haxle@tbserv ~/school $


*/

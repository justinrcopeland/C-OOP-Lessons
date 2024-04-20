// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their _______"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Justin Copeland
// Cosc1436/004
// Lab6_2 Ex1

#include <iostream>
#include <string>
using namespace std;

void writeProverb(int);

int main ()
{

	int wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Input a 1 if you want the sentence to be finished with party" << endl;
	cout << "Input any other number for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin  >> wordCode;
	cout << endl;
	
	writeProverb(wordCode);

	return 0;
}

void writeProverb (int number)
{
    if (number==1)
    {
	cout << "\nNow is the time for all good men to come to the aid of their party" << endl;
    }

    else
    {
	cout << "\nNow is the time for all good men to come to the aid of their country" << endl;
    }
}


/*
haxle@tbserv ~/school/chap6 $ ./Lab2
Given the phrase:
Now is the time for all good men to come to the aid of their ___
Input a 1 if you want the sentence to be finished with party
Input any other number for the word country
Please input your choice now
1776


Now is the time for all good men to come to the aid of their country
haxle@tbserv ~/school/chap6 $ ./Lab2
Given the phrase:
Now is the time for all good men to come to the aid of their ___
Input a 1 if you want the sentence to be finished with party
Input any other number for the word country
Please input your choice now
1


Now is the time for all good men to come to the aid of their party
haxle@tbserv ~/school/chap6 $
*/


//  This program will write the name, address and telephone
//  number of the programmer.

//  Justin Copeland
//  Cosc1436/004
//  Ex 2.1

#include <iostream>
using namespace std;


int main()
{
	
	string fName, lName, street, city, st, zip, phone;
	
	cout << "\nPlease enter your first name only " << endl;
	getline (cin,fName);

	cout << "\nPlease enter your last name only " << endl;
	getline (cin,lName);

	cout << "\nPlease enter your street address " << endl;
 	getline (cin,street);

	cout << "\nPlease enter your city name " << endl;
	getline (cin,city);

	cout << "\nPlease enter the two letter abbreviation of your state " << endl;
	getline (cin,st);

	cout << "\nPlease enter your numerical zip code " << endl;
	getline (cin,zip);

	cout << "\nPlease enter your phone number starting with the area code " << endl;
	getline (cin,phone);
	
	cout << "\nThe following is the data received by sky-net, please stay calm and wait for the authorities." << endl;
	cout << "	Programmer: " << fName << " " << lName << endl;
	cout << "	               " << street << endl;
	cout << "	               " << city << " " << st << ", " << zip << endl;
	cout << "\n\n\n";
	cout << "	  Telphone:  " << phone << endl;
	
        return 0;

}

/*
haxle@tbserv ~/school $ ./Lab1

Please enter your first name only
Justin

Please enter your last name only
Copeland

Please enter your street address
2225 Ivy Dr

Please enter your city name
Corpus Christi

Please enter the two letter abbreviation of your state
TX

Please enter your numerical zip code
78418

Please enter your phone number starting with the area code
1234567890

The following is the data received by sky-net, please stay calm and wait for the authorities.
        Programmer: Justin Copeland
                       2225 Ivy Dr
                       Corpus Christi TX, 78418



          Telphone:  1234567890
haxle@tbserv ~/school $

*/

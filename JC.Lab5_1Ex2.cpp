// Justin Copeland
// Cosc1435/004
// Ex5.2

#include<iostream>


using namespace std;

int main()
{
    char letter = 'a';

    while (letter != 'x')
    {	
	cout << "This program echos any character entered;" << endl;
	cout << "To exit press x" << endl;
	
	cout << "Please enter a letter" << endl;
	cin >> letter;
	cout << "The letter you entered is " << letter << endl;
    }

    return 0;
}
/*
haxle@tbserv ~/school/chap5 $ ./Lab1
This program echos any character entered;
To exit press x
Please enter a letter
a
The letter you entered is a
This program echos any character entered;
To exit press x
Please enter a letter
b
The letter you entered is b
This program echos any character entered;
To exit press x
Please enter a letter
x
The letter you entered is x
haxle@tbserv ~/school/chap5 $
*/

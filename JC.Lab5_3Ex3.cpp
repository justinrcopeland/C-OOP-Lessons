//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// Justin Copeland
// Cosc1436/004
// Ex3

#include <iostream>
using namespace std;

int main()
{
 	int total = 0;   
   	int min = 0;
	int max = 0;	
  	float mean = 0;  
	float number = 0;

  	cout << "Please enter the first number: " << endl;
   	cin >> min;
	cout << "Please enter the second number: " << endl;
	cin >> max;
  	
      	for (number = min; min <= max; min++)
        {
 	  	    total = total + min;
		}
		
        mean = float(total) / (min - number); 
		    
		cout << "The mean average of the first " << (min - number)
             << " positive integers is " << mean << endl;

   return 0;	
}
/*

haxle@tbserv ~/school/chap5 $ ./Lab3
Please enter the first number:
3
Please enter the second number:
9
The mean average of the first 7 positive integers is 6
haxle@tbserv ~/school/chap5 $ ./Lab3
Please enter the first number:
2
Please enter the second number:
4
The mean average of the first 3 positive integers is 3

*/

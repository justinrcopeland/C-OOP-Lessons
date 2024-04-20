// This program takes two numbers (pay rate & hours)
// and multiplies them to get grosspay    
// it then calculates net pay by subtracting 15%

//Justin Copeland
//Cosc1436/004
//Lab6_3 Ex1

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void printDescription(); 
void computePaycheck(float, int, float&, float&); 

int main()
{
	float payRate;
	float grossPay;
	float netPay;
	int hours;
	
	cout << setprecision(2) << fixed;
	
	cout << "Welcome to the Pay Roll Program" << endl; 
	
	printDescription();
	
	cout << "Please input the pay per hour" << endl;
	cin >> payRate;
	
	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl;
	
	computePaycheck(payRate,hours,grossPay,netPay);
	
	cout << "The gross pay is $" << grossPay << endl;
	
	cout << "The net pay is $" << netPay << endl;
	
	cout << "We hoped you enjoyed this program" << endl;
	
	return 0;
}

//   ********************************************************************
//                         printDescription
//   
//   task:     This function prints a program description
//   data in:  none
//   data out: none
//
//   ********************************************************************

void printDescription() //The function heading
{
    cout << "************************************************"  << endl << endl;
    cout << "This program takes two numbers (pay rate & hours)" << endl;
	cout << "and  multiplies them to get gross pay "            << endl;   
    cout << "it then calculates net pay by subtracting 15%"     << endl;
	cout << "************************************************"  << endl << endl;
}

//  *********************************************************************
//                        computePaycheck
//   
//   task:     This function takes rate and time and multiples them to
//             get gross pay and then finds net pay by subtracting 15%.
//   data in:  pay rate and time in hours worked
//   data out: the gross and net pay
//
//   ********************************************************************

void computePaycheck(float rate, int time, float& gross, float& net)

{		 
	float tax = .15;
	gross = rate * time;
	tax = gross * tax;
	net = gross - tax;
}
/*
haxle@tbserv ~/school/chap6 $ ./a.out
Welcome to the Pay Roll Program
************************************************

This program takes two numbers (pay rate & hours)
and  multiplies them to get gross pay
it then calculates net pay by subtracting 15%
************************************************

Please input the pay per hour
7.5

Please input the number of hours worked
40


The gross pay is $300.00
The net pay is $255.00
We hoped you enjoyed this program
haxle@tbserv ~/school/chap6 $
*/

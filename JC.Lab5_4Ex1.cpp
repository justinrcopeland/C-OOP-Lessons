// This program finds the average time spent programming by a student
// each day over a three day period.

// Justin Copeland
// Cosc1436/004
// Ex4	

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
    int student,day,time = 0;     // these are the counters for the loops

	cout << "This program will find the average number of hours a day" 
         << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl;
    cin >> numStudents;
    cout << "Enter the number of days in the long weekend" << endl;
    cin >> time; 
       
    for( student = 1; student <= numStudents; student++)
    {

		total = 0;
		for(day = 1; day <= time; day++)
		{
			cout << "Please enter the number of hours worked by student " 
				 << student <<" on day " << day << "." << endl;
            cin >> numHours;

            total = total + numHours;
		}

        average = total / time;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
		     << "student " << student << " is " << average
			 << endl << endl << endl;
    }

    return 0;	
}
/*
haxle@tbserv ~/school/chap5 $ ./a.out
This program will find the average number of hours a day that a student spent programming over a long 
weekend

How many students are there ?
2
Enter the number of days in the long weekend
2
Please enter the number of hours worked by student 1 on day 1.
4
Please enter the number of hours worked by student 1 on day 2.
6

The average number of hours per day spent programming by student 1 is 5


Please enter the number of hours worked by student 2 on day 1.
9
Please enter the number of hours worked by student 2 on day 2.
13

The average number of hours per day spent programming by student 2 is 11


haxle@tbserv ~/school/chap5 $
*/

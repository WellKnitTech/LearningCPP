/*1. Import relevant libraries

2. print “Please type your name.”
3. Read in user input to $name
	if $name == null go back to print “Please type your name.”
	else continue
4. print “Thank you, $name.”

5. Print “What is today’s date?”
6. read in user input to $date
7. removed due to complexity
8. Print “What model of car do you drive $name?”
9. read in user input to $vehicle
10. Print “Thank you for that information.”

11. Print “Name: $name”
12. print “Car model: $vehicle”
13. print “Date entered $date”

14. print “Would you like to make another entry? (Y to continue, N to exit)”
15. Read input to $continueprogram
	if $continueprogram == Y goto 2
	elif $continueprogram == N goto 16
	else goto 14
16. exit
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;


int main()
{

	cout<<"Please input your name. \n"	;
	//cin>>name
	string name;
	getline (cin, name);
	//cout<<name<<"\n";
	if (name.empty())
	do {
	if (name.empty())
		cout<<"You didn't type anything! Please type your name.\n"	;
		getline (cin, name);
	}while(name.empty());
	cout<<"Thank you "<<name<<".\n";

	
	cout<<"What is today's date? \n"	;
	//cin>>name
	string date;
	getline (cin, date);
	//cout<<name<<"\n";
	if (date.empty())
	do {
	if (date.empty())
		cout<<"You didn't type anything! Please type the date.\n"	;
		getline (cin, date);
	}while(date.empty());
	cout<<"Thank you "<<name<<".\n"<<"You said the date is "<<date<<".\n";
	
	cout<<"What model of car do you drive? \n"	;
	//cin>>name
	string car;
	getline (cin, car);
	//cout<<name<<"\n";
	if (car.empty())
	do {
	if (car.empty())
		cout<<"You didn't type anything! Please input the model of car you drive.\n"	;
		getline (cin, car);
	}while(car.empty());
	cout<<"Thank you "<<name<<".\n"<<"You said you drive a "<<car<<".\n";
	
	cout<<"\n";
	cout<<"The information you gave me is:\n";
	cout<<"\n";
	cout<<"Name: "<<name<<"\n";
	cout<<"Car Model: "<<car<<"\n";
	cout<<"Date Entered: "<<date<<"\n";
	
}

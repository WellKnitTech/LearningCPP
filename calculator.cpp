/*The purpose of this program is to act as a general calculator and to 
calculate tip.
*/

#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>


using namespace std;
//Function for addition.
double addition(double a, double b){
	
	return a + b;
}

//Function for subtraction.
double subtraction(double a, double b){
	
	return a - b;
}

//Function for division.
double division(double a, double b){
	
	return a / b;
}

//function for multiplication.
double multiplication(double a, double b){
	
	return a * b;
}

//function for calculating tip
double tipamount(double bill, double tipperc){
	//Takes the bill as a double, then does bill + (bill * tipperc)
	cout<<"\nTip amount: "<<fixed<<setprecision(2)
	<<bill * (tipperc / 100);
	return bill + ( bill * (tipperc / 100) );
	
	
}

//Notice to the user about what the program is for.
void purpose(){
	cout<<"The purpose of this program is to act as a general" 
	<<" calculator"
	<<"\nand to calculate tip.\n\n";
	cout<<"What function would you like to perform?"
	<<"\n+ for addition, - for subtraction, * for multiplication, / for"
	<<" division, \nT for tip calculation, and E to exit.\n\n";
	
}

int main(){
	//Display banner only once, need a static variable for this.
	static int purpose_check = 0;
	
	if (purpose_check == 0){
	purpose();//Banner for beginning of the program.
	purpose_check++;//Turning off the banner
	}
	
	//Taking in the operation.
	char operation;
	cin.clear(); //Every instance of this is to make sure there is 
				 //nothing left over in the buffer.
	cin>>operation; //Used to determine which operation to perform.
	
	
	//declaring my variables.
	double bill = 0;
	double tipperc = 0;
	double a = 0;
	double b = 0;
	
	switch(operation)
	{
			case 'T':
			case 't':
				cout<<"\nWhat was your bill?\n";
				cin.clear();
				cin>>bill;
				//Checking user input.
				while(cin.fail() || bill <= 0){
		
				// input was not valid
				cout<<"\nThat was not valid input. Your bill needs to"
				<<" be"
				<<" a positive number and not 0.\n"<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your bill?\n";
				cin>>bill;
				}
				cout<<"\nWhat tip percentage do you want to give?\n";
				cin.clear();
				cin>>tipperc;
				
				//input sanitization
				while(cin.fail() || tipperc < 0){
		
				// input was not valid
				cout<<"\nThat was not valid input. Your percentage"
				<<" needs to be"
				<<" a 0 or positive number.\n"<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat percentage did you want?\n";
				cin>>tipperc;
				}
				
				cout<<"\n"<<"Total with tip: "<<fixed<<setprecision(2)
				<<tipamount(bill,tipperc)<<"\n\n";
				break;
			case '+':
				//cout<<"+ was run";
				cout<<"\nWhat is the first number?\n";
				cin.clear();
				cin>>a;
				
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>a;
				}
				
				cin.clear();
				cout<<"\nWhat is the second number?\n";
				cin>>b;
				
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>b;
				}
				
				cout<<"\nYour answer is: "<<addition(a,b)<<"\n";
				break;
			case '-':
				
				cout<<"\nWhat is the first number?\n";
				cin.clear();
				cin>>a;
				
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>a;
				}
				
				cin.clear();
				cout<<"\nWhat is the second number?\n";
				cin>>b;
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>b;
				}
				cout<<"\nYour answer is: "<<subtraction(a,b)<<"\n";
				break;
			case '/':
				
				cout<<"\nWhat is the first number?\n";
				cin.clear();
				cin>>a;
				
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>a;
				}
				
				cin.clear();
				cout<<"\nWhat is the second number?\n";
				cin>>b;
				
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>b;
				}
				cout<<"\nYour answer is: "<<division(a,b)<<"\n";
				break;
			case '*':
				
				cout<<"\nWhat is the first number?\n";
				cin.clear();
				cin>>a;
				
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>a;
				}
				
				cin.clear();
				cout<<"\nWhat is the second number?\n";
				cin>>b;
				
				//Sanitization
				while(cin.fail()){
		
				// input was not valid
				cout<<"\nThat was not valid input."<<endl;
		
			
				cin.clear(); // input stream bug.  Need to clear.
		
				while (cin.get() != '\n'){} //Infinite loop prevention.
				cout<<"\nWhat was your first number?\n";
				cin>>b;
				}
				cout<<"\nYour answer is: "<<multiplication(a,b)<<"\n";
				break;
			case 'E': //Cases for exit.
			case 'e':
				return 0; //Exit the program.
				break;
			default: //If the user is dumb.
				cout << '\a';
				cout<<"\nYou did not enter a valid character."
				<<" Returning to the beginning.\n\n"
				<<"\n+ for addition, - for subtraction, * for"
				<<" multiplication, / for"
				<<" division, \nT for tip calculation, and E"
				<<" to exit.\n\n";
				return main();
				break;
	}
	

	
}


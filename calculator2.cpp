//Calculator program using switch case which accepts user input and asks them to choose an operation.
 
#include<iostream>
using namespace std;

int a,b;

void Inputs(int &a,int &b){
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: " ;
	cin >> b;
} 

int main (){

// Index for all operations.
	cout << "" << endl;
	cout << "\t\t\t\tCALCULATOR 2.0" << endl;
	cout << "............................." << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply " << endl;
	cout << "4. Division" << endl;
	cout << "5. Power" << endl;
	cout << "6. Coming soon" << endl;
	cout << "7. Coming soon" << endl;
	cout << "............................." << endl; 


// switch case used to execute selected operation only.

	
	int ch;
	bool run = true;

	// while loop to provide option for next operation input.
	while (true){
		cout << "Enter your choice of operation: " ;
		cin >> ch;
		if (ch >= 1 && ch <= 6){
			switch(ch){
					
				case 1:
					Inputs(a, b);
					cout << "The Addition of a and b is: " << endl;
					cout << a+b << endl;
					break;
					
				case 2:
					Inputs(a, b);
					cout << "The Subtraction of a and b is: " << endl;
					cout << a-b << endl;
					break;
					
				case 3:
					Inputs(a, b);
					cout << "The Multiplication of a and b is: " << endl;
					cout << a*b << endl;
					break;
					
				case 4:
					Inputs(a, b);
					cout << "The Division of a and b is: " << endl;
					cout << a/b << endl;
					break;
					
				case 5:
					Inputs(a, b);
					cout << "The Power of a raised to the power b is: " << endl;
					cout << a+b << endl;
					break;
				
				case 6:
					Inputs(a, b);
					cout << "The addition of a and b is: " << endl;
					cout << a+b << endl;
					break;
					
					
				default: 
					cout << "please enter a valid choice from the list" << endl;
					break;
			}
			
		// exit command.
		}else if (ch == 7){
			cout << "Exiting the program" << endl;
			break;
		
		}else{
			cout << "Please enter valid choice: " << endl;
			cout << "" << endl;
							
		}
	}

	return 0;
}

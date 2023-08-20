#include<iostream>
using namespace std;



void inputnum(float &a ,float &b){
	cout<< "Enter number a: " << endl;
	cin >> a;
	cout<< "Enter number b: " << endl;
	cin >> b;
}

int main() {

// displaying the instructions of use and taking user input on case.
	int ch;
	float a,b;
	cout << "\t\t\t\tCALCULATOR 1.0" << endl;
	cout << "................................" << endl;
	cout << "1 : Addition \n2 : Subtraction \n3 : Multiplication \n4 : Division" << endl;
	cout << "................................" << endl;
	cout<< "Enter the case/operation you want to execute: ";
	cin >> ch ;
	
// loop for making sure the input beyond 4 is neglected.
	while (ch > 0 && ch < 5){
		
// using switchcase for choosing the operation
		switch(ch){
			case 1: 
				inputnum(a,b);
				cout << "The addition is: " << endl;
				cout << a+b << endl;	
				break;
			case 2: 
				inputnum(a,b);
				cout << "The subtraction is: " << endl;
				cout << a-b << endl;	
				break;
			case 3: 
				inputnum(a,b);
				cout << "The multiplication is: " << endl;
				cout << a*b << endl;	
				break;
			case 4: 
				inputnum(a,b);
				cout << "The division is: " << endl;
				cout << a/b << endl;	
				break;
			default: 
				cout << "Please provide a valid input from the list above" << endl;
				break;
		}
		
		cout << "Enter the case/operation you want to execture: ";
		cin >> ch;
				 	
	} 


	
	
	
	return 0;
}

// prgoramme for finding factorial of a given number.
#include<iostream>
using namespace std;

int factorial(int);

int main(){
	
	int x, factrl;
	
	cout << "Enter the number you want to factorial off: " << endl;
	cin >> x ;
	factrl = factorial(x);
	cout << "The factorial of the number you entered is: " << factrl << endl;
	 
	return 0;
}

//function for finding the factorial using recursion.
int factorial (int num){
	int i = 1, facto = 1;
	while (i <= num){
		facto = facto * i;
		i++;
	}

	return facto;
}
	

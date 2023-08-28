//fibonacci series programme
#include<iostream>
using namespace std;

int i = 0, a = 0, b = 1, range, x; 

int main(){


	cout << "Enter the number";
	
	cout << "Enter number upto which you want to find fibonacci series: " << endl;
	cin >> range ; 
	
	while (i < range ){
		
		x = a+b;
		cout << x << endl;
		a=b;
		b=x;
		 
		++i;
		}
	

	return 0;
}

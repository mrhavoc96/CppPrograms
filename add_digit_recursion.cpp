
//A programme which adds the digits of a five digit number using recursion. 
#include<iostream>

using namespace std;

int x, sum;
int dig_add(int);

int main(){
	
	cout << "Enter the number you want to add the digits off:  " << endl;
	cin >> x;
	sum = dig_add(x);
	cout << "The addition of the digits is: " << sum << endl;
	
	return 0;
}

int dig_add(int n){
	int sumsum, digit;
	if (n > 0){
		digit = n % 10;
		sumsum = digit + dig_add(n/10);
		cout << sumsum << endl;           //window into what's happening with each recursions to the sumsum variable.
	}else{
		return 0;
	
	}
	return sumsum;
}



















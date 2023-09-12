#include<iostream>

int factori(int, int);

int main(){
	
	int num, factorial;	
	
	std::cout << "Enter the number you want to get factorial of: " << std::endl;
	std::cin >> num;
		if (num == 0){
			std::cout << "Please Enter a non zero integer!" << std::endl;
			main();
		}else{
			factorial = factori(num, 1);
			std::cout << "The factorial of the number " << num << " is " << factorial << std::endl;			
		}	
	return 0;
}

int factori(int x, int i){
	int facto;
	facto = x;
	if (i < x){
		return facto * factori(x-1,i);
						
	}else{
		return 1;
	}
}

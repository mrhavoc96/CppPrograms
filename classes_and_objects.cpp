// A simple database programme using classes and objects.
#include<iostream>
#include<string>

using namespace std; 


class student{
	private:
		string name, div, hobbies, dob;
		int age, grade;
	public:
		student(){
			cout << "Constructor initiated..." << endl;
		
		} 
		void get_data();
		void retrieve_data();
};


void student::get_data(){
	std::cout << "Enter the name of the student: " << std::endl;
	std::getline(cin, name);
	std::cout << "Enter the age of the student: " << std::endl;
	std::cin >> age;
	std::cout << "Enter the grade of the student: " << std::endl;
	std::cin >> grade;
	std::cout << "Enter the hobbies of the student: " << std::endl;
	std::cin >> hobbies;
	std::cout << "Enter the dob of student: " << std::endl;
	std::cin >> dob;
	std::cout << "Enter the division of student: " << std::endl;
	std::cin >> div;
	
	
	
}

void student::retrieve_data(){
	std::cout << "Name: " << name << std::endl;
	std::cout << "grade: " << grade << std::endl;
	std::cout << "div: " << div << std::endl;	
	std::cout << "hobbies: " << hobbies << std::endl;
	std::cout << "dob: " << dob << std::endl;
	std::cout << "Age: " << age << std::endl;	
} 



int main(){
	student student1;
	student1.get_data();
	student1.retrieve_data();

	return 0;
}


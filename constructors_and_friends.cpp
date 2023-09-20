// exploring 3 constructor types.
#include <iostream>
#include <string>

using namespace std;

class cars{
	private: 
		int price, seats, seating_cap;
		string type, color;
	
	public:
		
		void get_info();
		void retrieve_info();
		
		// default constructor.
		cars(){
			cout << "...............Car database................." << endl;
		}
		
		//parameterised constructor.	
		cars(int seat_count){
			seating_cap = seat_count;
		}
		
		//copy constructor.
		cars(cars &obj){
			seating_cap = obj.seating_cap;
			cout << "confirmation of configuration of seats: " << seating_cap << endl;
		
		}
		
		//declaring friend function.
		friend void seating(cars);
};

//member function 1 defination.
void cars::get_info(){
	cout << "Enter price of the car: " << endl; 
	cin >> price ;
	cout << "Enter seats of the car: " << endl;
	cin >> seats ;
	cout << "Enter type of the car: " << endl;
	cin >> type ;
	cout << "Enter color of the car: " << endl;
	cin >> color ;
}

//member function 2 defination.
void cars::retrieve_info(){
	cout << "Price of car: " << price << endl;
	cout << "Color of car: " << color << endl;
	cout << "Type of car: " << type << endl;
}

//friend function declaration.
void seating(cars obj){
	cout << "Number of seats as per your suggestion: " << obj.seating_cap << endl;
} 

int main(){
	int seat_count;
	cout << "Enter the number of seats for the seat configuration of your car: " << endl;
	cin >> seat_count;
	cars mazda(seat_count); //parameterised constructor call.
	mazda.get_info();
	mazda.retrieve_info();
	seating(mazda); //friend function call.
	cars toyota(mazda); //copy constructor.
	return 0;
}






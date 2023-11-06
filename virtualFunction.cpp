#include <iostream>
using namespace std;

class base{
    protected:
        int base_value = 12;

    public:
        virtual void display(){
            cout << "Text from Base class with value: " << base_value << endl; 
        }
};

class derived : public base{
    protected:
        int derived_value = 122;
    public: 
        void display(){
            cout << "Text from DERIVED class with value: " << derived_value << endl;
            cout << "Value from base class: " << base_value << endl;
        }
};

int main(){
    base *base_class_pointer;
    derived *derived_class_pointer;

    base baseObj;
    derived derivedObj;

    base_class_pointer = &derivedObj;

    base_class_pointer -> display();

    return 0;
}
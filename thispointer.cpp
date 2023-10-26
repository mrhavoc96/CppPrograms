#include <iostream>
using namespace std;

class test{
    private:
        int a, b;
    public:
        test(int a){
            // this is a pointer used for pointing the current object which is invoking the
            //data member.
            this -> a = a;
        }

        void publishData(){
            cout << "The value of a is: " << a << endl;
        }
};


int main(){
    test obj1(12);
    obj1.publishData();

    return 0;
}

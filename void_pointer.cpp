//program for understanding and implementing void pointers.
#include <iostream>
using namespace std;

void printFunc(void *ptr, char x){
    switch(x){
        case 'i': 
            cout << "The integer is: " << *((int *)ptr) << endl;
            // *((int*)ptr) means we are first typcasting the void pointer to int pointer and then dereferrencing
            // the integer pointer ptr.
            break;
        case 'c': 
            cout << "The character is: " << *((char *)ptr) << endl;
            break;
    }
}


int main(){
    int q = 3;
    void *p = &q;
    printFunc(p, 'i'); // OR printFunc( &q , 'i' );
    
    char a = 'b';
    printFunc(&a, 'c');



    return 0;
}
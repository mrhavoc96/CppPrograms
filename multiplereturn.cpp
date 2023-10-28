//this program shows how we can return mutilple values from a function using pointers.
#include <iostream>
using namespace std;

void compare(int ar[], int size, int *smallest, int *biggest){ //taking parameters as refference so the variable can be modified.
    for (int i = 1; i < size; i++){
        if (ar[i] < *smallest){
            *smallest = ar[i]; 
        }
    }
    for (int i = 1; i < size; i++){
        if (ar[i] > *biggest){
            *biggest = ar[i];
        }
    }
    
}

int main(){
    int arr1[5] = {5,2,1,3,4};
    int size = 5;
    int smallest = arr1[0];
    int biggest = arr1[0];

    compare(arr1, size, &smallest, &biggest);
    cout << "The smallest and the biggest numebers in the array are " << smallest << " and " << biggest << " reapectively" << endl; 

    return 0;
}
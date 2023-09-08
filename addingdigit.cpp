#include <iostream>
#include <list>
using namespace std;

int add_dig(int);

int x, sum;

int main (){
    cout << "Enter 5 digit number: " << endl;
    cin >> x ;
    sum = add_dig(x);
    cout << "The sum of digits in given number is: " << sum << endl; 
    return 0;
}

int add_dig(int x){
    int n, i, sumsum = 0, digit;
    n = x;
    while(n > 0){

        digit = n % 10;
        sumsum = sumsum + digit;
        n = n/10;
    }
    return sumsum;

}
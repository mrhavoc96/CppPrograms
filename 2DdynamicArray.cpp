//code for understanding dynamically allocated two dimensional arrays.
#include <iostream>
using namespace std;

void input(int** table, int rows, int colmns){
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < colmns; j++){
            cout << "enter element: " << i << ", " << j << endl;
            cin >> table[i][j];  
        }
    }
}

void output(int** table, int rows, int columns){
    for (int i = 0; i < rows; i++){
        cout << " " << endl;
        for (int j = 0; j < columns; j++){
            cout << table[i][j] << " ";
        }
    }
}

int main(){
    int rows, colmns;
    cout << "Enter number of collumns and rows: " << endl;
    cin >> rows >> colmns;

    int** table = new int*[rows];

    for (int i = 0; i < rows; i++){
        table[i] = new int[colmns];
    }

    input(table, rows, colmns);
    output(table, rows, colmns);

    delete[] table;
    return 0;
}
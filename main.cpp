// COMSC-210 | Lab 6 | Ismael Hadi
#include <iostream>
using namespace std;

const int arraySize = 5;

void enterArrayData(double* array, int size);
void outputArrayData(double* array, int size);
double sumArray(double* array, int size);

int main() {
    double* arr = new double[arraySize];

    enterArrayData(arr, arraySize);
    outputArrayData(arr, arraySize);
    cout << "Sum of values: " << sumArray(arr, arraySize) << endl;
    delete []arr;
    arr = nullptr;
    return 0;
}
//This function takes our dynamic array and its size as input and facilitates user input for its double values
void enterArrayData(double* array, int size) {
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(array + i);
    }
    cout << "Data entry complete." << endl;
}
//This function takes our dynamic array and its size as input and outputs the arrays elements cleanly using pointer notation
void outputArrayData(double* array, int size) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;
}
//This function takes our dynamic array and its size as input and sums all its values, then returns them
double sumArray(double* array, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++){
        sum += *(array + i);
    }
    return sum;
}

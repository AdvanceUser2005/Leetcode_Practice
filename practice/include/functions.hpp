#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP  

#include <iostream>

using namespace std;

void sum(int a, int b);
int product( int a, int b);
int sum_of_digits(int n);

template <typename T>   // used to write functions for any data type, assuming T as that data type
void printArray ( T* array, int size) {
    cout << "{";
    for(int i = 0; i < size; i++) {
        cout << array[i];

        if (i == size - 1) {
            cout << "}" << endl;
        } else {
            cout << ", ";
        }
    }

}

//Printing the sum of an array
template <typename T>
T sumArray (T* array, int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    return sum;
}

//Reverse printing an array
template <typename T>
T* reverseArray(T* array, int size) {

    array = array + (size);
    
    for(int i = 0; i < size; i++) {
        array = array -1;
        cout << *array << endl;
    }

    return array;

}

int linearSearch(int array[], int size, int target);






#endif
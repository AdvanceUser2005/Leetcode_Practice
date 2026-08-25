#include "functions.hpp"
#include <iostream>

using namespace std;

void sum( int a, int b) {
    cout << a + b << endl;
}

int product( int a, int b) {
    return (a * b);
}

int sum_of_digits(int n) {
    int sum = 0;

    while (n > 0) {
        int lastD = n % 10;
        n = n / 10;
        sum = sum + lastD;
    }

    return sum;
}

// never write a template fucntion in cpp

//Linear Search Algorithm
int linearSearch(int array[], int size, int target)  {
    for (int i = 0; i < size; i++) {
        if(target == array[i]) {
            return i;
        }
    }
    return -1;
}





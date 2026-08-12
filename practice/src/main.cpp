#include <iostream>
#include "functions.hpp"
#include <climits>

using namespace std;

// Leet code Practice
// Sum of all numbers from 1 to n
// 1 + 2 + 3 .... + n

// int main() {

//     int n;
//     cout << "Please enter the value for n: ";
//     cin >> n;

//     int sum = 0;

//     for(int i = 1; i <= n; i++) {
//         sum = sum + i;
//         cout << i;

//         if (i == n) {
//             cout << endl;
//         } else {
//             cout << " + ";
//         }
//     }

//     cout << "The final sum is: " << sum << endl;

//     return 0;

// }



// LEETCODE PRACTICE Q2 
// Sum of all odd numbers from 1 to n
// 1 + 3 + 5 .... + n

// int main() {

//     int n;
//     cout << "Please enter the value for n: ";
//     cin >> n;

//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         if (i%2 != 0) {
//             cout << i;
//             sum = sum + i;
//             if (i == n || i == n-1) {
//                 cout << endl;
//             } else {
//                 cout << " + ";
//             }
//         }


//     }

//     cout<< "The sum of all odd numbers till n is: " << sum << endl;
//     return 0;
// }

// LEETCODE PRACTICE QUESTION
// Verifying if the given numbers is a prime numb er or not

// int main() {

//     cout << "Please enter the number to check for prime: ";
//     int n;
//     cin >> n;

//     bool isPrime = true;    // assumed by default

//     for (int i = 2; i <= n-1; i++) {
//         if (n % i == 0) {     // Not prime
//             isPrime = false;
//             break;
//         }

//     }

//     if (isPrime == true) {
//         cout << "Yes, it is a prime number." << endl;
//     } else { cout << "No, it is not a prime number" << endl; }

//     return 0;

// }

// PATTERNS 
// creating a square pattern with n = noumber of enteries per side.
// Example: n = 4
//          1 2 3 4 
//          1 2 3 4 
//          1 2 3 4 
//          1 2 3 4 


// int main() {
//     cout << "Please enter the number of enteries per side: ";
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for(int i = 1; i <= n; i++) {
//             cout << i;
//             if (i == n) {
//                 break;
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
        
//     }

//     return 0;
// }

// Pattern
// same pattern as above but for alphabets this time - all caps

// int main() {

//     int n = 4;
//     char ch = 'A';

//     for (int i = 1; i <= n; i++) {
//         for (int i = 1; i <= n; i++) {
//             cout << ch;
//             ch = ch + 1;
//             if ( i ==  n) {
//                 break;
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// Triangle Pattern
// *
// * *
// * * *
// based upon value of n for n = n number of rows.
// Its important to note that for each row there is the same no of elements in them. 
// 1st rwo hass 1 elements
// 2nd row has two elements and so on. 


// int main() {

//     char ch = '*';  // the charaacter we are printing the triangle with
    
//     cout << "please enter how many lines do you want in the triangle: ";
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << ch;

//             if (j == i) {
//                 break;
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

// }

// LEETCODE PRACTICE 
// sum of all the digits in a given number
// number of digits = number of loops through the number
// maybe i don tneed to know the total number of digits? 

// int main() {
//     int n = 147;
//     cout << n % 10 << endl; //verifying logic
//     cout << 14 % 10 << endl;
//     cout << 1 % 10 << endl;

//     cout << sum_of_digits(9999999) << endl;
    
//     return 0;
// }


//Refreshing topics

// //Base Class
// class Vehicle {
//     public:
//         string make = "Ferrari";
//         void horn() {
//             cout << "TOOT!!!" << endl;
//         }
// };

// //Derived Class
// class Car : public Vehicle {
//     public:
//         string model = "Ford";
// };



// int main() {

//     Car mycar;

//     mycar.horn();
//     cout << mycar.make << " " << mycar.model << endl;
// }

//Basically everything in between these classes is shared!! Does it work with private? ---- NO it doesnt work with private. It has to be public. 


// LEETCODE PRACTICE
//reversing the array enteries

//remember if i need the memory address, i need to use '&'

// int main() {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int sz = sizeof(arr) / sizeof(arr[0]);

//     int x = 10;
//     int* ptr = &arr[0];

//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << ptr << endl;
//     cout << "Dereferencing the value of ptr: " << *ptr << endl;     // to get the value at a memory address use this
//     cout << "Address of ptr: " << &ptr << endl;                     // to get memory address use this
//     cout << "What will happen with only ptr: " << ptr << endl;      

//     ptr = ptr + 4;

//     cout << *ptr << endl;

//     return 0;

// }

// lets look at it step by step 
// 1. value of x is 10 
// 2. variable ptr points at memory address of position 0 at array


//Revering the array without function right now

// int main() {
//     int array[5] = {77, 55, 99, 44, 22};
//     int sz = sizeof(array) / sizeof(array[0]);

//     int* ptr = &array[sz - 1];

//     cout << *ptr << endl;

//     for (int i = 0; i < sz - 1; i++) {
//         ptr = ptr - 1;
//         cout << *ptr << endl;
//     }

//     return 0;
// }

//LEETCODE PRACTICE
// moving array reversal into a function

// int main() {

//     int array[] = { 1, 2, 3, 4, 5};
//     int sz = sizeof(array) / sizeof(array[0]);

//     reverseArray(array, sz);


// }


//LEETCODE PRACTICE
// FNIIDNG THE HIGHEST NUMBER IN AN ARRAY

// int main() {
//     int array[] = {1, 4, 67, 7, 9};
//     int size = sizeof(array) / sizeof(array[0]);

//     int max = INT_MIN;


//     for(int i = 0; i < size; i++) {
//         if(array[i] > max) {
//             max = array[i];
//         }
//     }

//     cout << max << endl;

// }

//LEETCODE PRACTICE
// linear search 

// int main() {
//     int array[] = {1, 5, 6, 3, 7, 8, 0};
//     int target = 8;

//     int size = sizeof(array) / sizeof(array[0]);

//     for (int i = 0; i < size; i++) {
//         if (target == array[i]) {
//             cout << i << endl;
//         }
//     }
// }

//Refine linear search further to incorporate an output of the index if found
// or else print 0 or false if not found.

int main() {
    int array[5] = {1, 5, 6, 32, 2};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 0;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (target == array[i]) {
            cout << i << endl;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "-1" << endl;
    }

    return 0;
    
}
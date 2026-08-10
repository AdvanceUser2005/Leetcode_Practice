#include <iostream>
#include "functions.hpp"

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



//sum of all the enteries in a vector 

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    // printArray(arr, sz);
// 
    // cout << sumArray(arr, sz) << endl;

    
    int* t = &arr[0];

    // cout << t << endl; 
    
    t = t + 4;

    // cout << *t << endl;

    reverseArray(arr, sz);
    printArray(reverseArray(arr, sz), sz);


    return 0;
}




#include <iostream>

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


int main() {

    int n = 4;
    char ch = '*';

    for (int i = 1; i <= n; i++) {
        for (
    }

}


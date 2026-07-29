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

int main() {

    int n;
    cout << "Please enter the value for n: ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {

        if (i % 2 != 0) {   // only adding the odd numbers
            sum = sum + i;
        }  else {
            i++;
        }

        if (i == n) {   // Displaying the list of all odd numbers
            cout << endl;
        } else {
            cout << " + ";
        }
    }

    cout << "The final sum is: " << sum << endl; //Displaying final result

    return 0;

}
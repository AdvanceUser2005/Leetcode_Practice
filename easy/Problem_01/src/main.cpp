#include <iostream>


int main() {
    
    // Defining a  test case to practice with
    int array[5] = {2, 7, 11, 15};
    int target = 9; // Defined target for tthe test case

    int size = sizeof(array) / sizeof(array[0]);

    std::cout << size << std::endl;

    return 0;

}